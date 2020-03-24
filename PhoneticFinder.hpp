#include <iostream>
#include <stdexcept>
#include <string>

using namespace std;

namespace phonetic
{
    string find(string text, string example);
    string getWord(string text, int index);
    bool endOfWord(string text, int index);
    bool isEqual(string x, string y);
    bool isSwapable(char a, char b);
    bool sameLetter(char a, char b);
}
