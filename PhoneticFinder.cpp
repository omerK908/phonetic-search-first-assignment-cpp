#include "PhoneticFinder.hpp"
#include <string.h> 
#include <stdexcept>
using namespace std;

#define SPACE ' '
#define ENTER '\n'
#define END '\0' 
#define TAB '\t'
#define ASCII 32


namespace phonetic
{
    string find(string text, string search)
    {
        int textLength = text.size();
        int searchLength = search.size();
        if(textLength == 0 || searchLength == 0 || !isWord(search))
        {
            /*throw*/
        string ex = "Empty text";
        throw runtime_error(ex);
        }
        
        for(int i = 0; i < textLength; i++)
        {
            if(i == 0)
            {
                string tmp = getWord(text, i);
                if(isEqual(tmp, search))
                {
                    return tmp;
                }
            }
            else if(endOfWord(text, i) && (i + 1 < textLength) && !endOfWord(text, i + 1))
            {
                string tmp = getWord(text, i + 1);
                if(isEqual(tmp, search))
                {
                    return tmp;
                }
            }
            
        }
        /*throw*/
        string ex = "Did not find the word '" + search + "' in the text";
        throw runtime_error(ex);
    }

    bool endOfWord(string text, int index)
    {
        return(text[index] == SPACE || index == text.size() - 1 || text[index] == ENTER || text[index] == TAB);
    }

    string getWord(string text, int index)
    {
        int i = index;
        size_t length = text.size();
        for (; i < length; i++)
        {
            if(endOfWord(text, i))
            {
                if(i == text.size() - 1)
                {
                    return text.substr(index, i - index + 1);
                }
                return text.substr(index, i - index);
            }
        }
        return "";
    }

    bool isEqual(string x, string y)
    {
        if(x.size() != y.size())return false;
        if(x.compare(y) == 0)return true;
        int length = x.size();
        for(int i = 0; i < length; i++)
        {
            if(x[i] != y[i])
            {
                if(!isSwapable(x[i], y[i]))return false;
            }
        }
        return true;
    }

    bool isSwapable(char a, char b)
    {
        if(sameLetter(a, b))return true;
       
           if(a == 'V' || a == 'v') return (b == 'w') || (b == 'W');
           if(a == 'W' || a == 'w') return (b == 'v') || (b == 'V');

           if(a == 'B' || a == 'b') return (b == 'f') || (b == 'F') || (b == 'p') || (b == 'P');
           if(a == 'F' || a == 'f') return (b == 'b') || (b == 'B') || (b == 'p') || (b == 'P');
           if(a == 'P' || a == 'p') return (b == 'f') || (b == 'F') || (b == 'b') || (b == 'B');
           
           if(a == 'G' || a == 'g') return (b == 'j') || (b == 'J');
           if(a == 'J' || a == 'j') return (b == 'g') || (b == 'G');

           if(a == 'C' || a == 'c') return (b == 'k') || (b == 'K') || (b == 'q') || (b == 'Q');
           if(a == 'K' || a == 'k') return (b == 'c') || (b == 'C') || (b == 'q') || (b == 'Q');
           if(a == 'Q' || a == 'q') return (b == 'c') || (b == 'C') || (b == 'k') || (b == 'K');

           if(a == 'S' || a == 's') return (b == 'z') || (b == 'Z');
           if(a == 'Z' || a == 'z') return (b == 's') || (b == 'S');

           if(a == 'D' || a == 'd') return (b == 't') || (b == 'T');
           if(a == 'T' || a == 't') return (b == 'd') || (b == 'D');

           if(a == 'O' || a == 'o') return (b == 'u') || (b == 'U');
           if(a == 'U' || a == 'u') return (b == 'o') || (b == 'O');

           if(a == 'I' || a == 'i') return (b == 'y') || (b == 'Y');
           if(a == 'Y' || a == 'y') return (b == 'i') || (b == 'I');
          
        return false;
    }

    bool sameLetter(char a, char b)
    {
        if(a < b)return a + ASCII == b;
        return b + ASCII == a;
    }

    bool isWord(string str)
    {
        int length = str.size();
        for(int i = 0; i < length; i++)
        {
            if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
            {
                return true;
            }
        }
        return false;
    }
}

