/**
 * An example of how to write unit tests.
 * Use this as a basis to build a more complete Test.cpp file.
 * 
 * IMPORTANT: Please write more tests - the tests here are only for example and are not complete.
 * 
 * Date: 2020-02
 */

#include "doctest.h"
#include "PhoneticFinder.hpp"
using namespace phonetic;

#include <string>
using namespace std;


 /* b, f, p && i,y*/
TEST_CASE("Test replacement of p and b") {
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "hapby") == string("happy"));
    CHECK(find(text, "habpy") == string("happy"));
    CHECK(find(text, "happi") == string("happy"));
    CHECK(find(text, "habbi") == string("happy"));
    CHECK(find(text, "hapbi") == string("happy"));
    CHECK(find(text, "habpi") == string("happy"));
   
}
TEST_CASE("Test replacement of b and f"){
    string text = "xxx happy yyy";
    CHECK(find(text, "habby") == string("happy"));
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "habfy") == string("happy"));
    CHECK(find(text, "hafby") == string("happy"));
    CHECK(find(text, "habbi") == string("happy"));
    CHECK(find(text, "haffi") == string("happy"));
    CHECK(find(text, "habfi") == string("happy"));
    CHECK(find(text, "hafbi") == string("happy"));
}
TEST_CASE("Test replacement of p and f"){
    string text = "xxx happy yyy";
    CHECK(find(text, "happy") == string("happy"));
    CHECK(find(text, "haffy") == string("happy"));
    CHECK(find(text, "hapfy") == string("happy"));
    CHECK(find(text, "hafpy") == string("happy"));
    CHECK(find(text, "happi") == string("happy"));
    CHECK(find(text, "haffi") == string("happy"));
    CHECK(find(text, "hapfi") == string("happy"));
    CHECK(find(text, "hafpi") == string("happy"));
}

 /* v, w && o,u */
TEST_CASE("Test replacement of v and w "){
    string text = "xxx worry yyy";
    CHECK(find(text, "worry") == string("worry"));
    CHECK(find(text, "vorry") == string("worry"));
    CHECK(find(text, "wurry") == string("worry"));
    CHECK(find(text, "vurry") == string("worry"));
    CHECK(find(text, "worri") == string("worry"));
    CHECK(find(text, "vorri") == string("worry"));
    CHECK(find(text, "wurri") == string("worry"));
    CHECK(find(text, "vurri") == string("worry"));


}


/* g, j */
TEST_CASE("Test replacement of g and j"){
    string text = "xxx gal yyy";
    CHECK(find(text, "gal") == string("gal"));
    CHECK(find(text, "jal") == string("gal"));
}

    TEST_CASE("Test replacement of g and j"){
    string text = "xxx global yyy";
    CHECK(find(text, "global") == string("global"));
    CHECK(find(text, "jlobal") == string("gal"));

    }


/* c, k, q*/
TEST_CASE("Test replacement of c and k and q" ){
    string text = "xxx corona yyy";
    CHECK(find(text, "corona") == string("corona"));
    CHECK(find(text, "korona") == string("corona"));
    CHECK(find(text, "qorona") == string("corona"));

}
TEST_CASE("Test replacement of c and k and q" ){
      string text = "xxx kokoriko yyy";
    CHECK(find(text, "kokoriko") == string("kokoriko"));
    CHECK(find(text, "cocorico") == string("kokoriko"));
    CHECK(find(text, "qoqoriqo") == string("kokoriko"));

    

}


/* s, z */
TEST_CASE("Test replacement of s and z" ){
    string text = "xxx osborn yyy";
    CHECK(find(text, "osborn") == string("osborn"));
    CHECK(find(text, "ozborn") == string("osborn"));
}

TEST_CASE("Test replacement of s and z" ){

     string text = "xxx tsozano yyy";
    CHECK(find(text, "tsozano") == string("tsozano"));
    CHECK(find(text, "tzosano") == string("tsozano"));


}

/* d, t* && o.u */
TEST_CASE("Test replacement of d and t"){
    string text = "xxx dont yyy";
    CHECK(find(text, "dont") == string("dont"));
    CHECK(find(text, "dond") == string("dont"));
    CHECK(find(text, "dunt") == string("dont"));
    CHECK(find(text, "dund") == string("dont"));
    CHECK(find(text, "tont") == string("dont"));
    CHECK(find(text, "tond") == string("dont"));
    CHECK(find(text, "tunt") == string("dont"));
    CHECK(find(text, "tund") == string("dont"));
}


TEST_CASE("Test replacement of lower-case and upper-case ") {
    string text = "Happi xxx yyy";
    CHECK(find(text, "happi") == string("Happi"));
    CHECK(find(text, "Happi") == string("Happi"));
    CHECK(find(text, "hAppi") == string("Happi"));
    CHECK(find(text, "haPpi") == string("Happi"));
    CHECK(find(text, "HapPi") == string("Happi"));
    CHECK(find(text, "happI") == string("Happi"));
    CHECK(find(text, "HAppi") == string("Happi"));
    CHECK(find(text, "HAPpi") == string("Happi"));
    CHECK(find(text, "HAPPi") == string("Happi"));
    CHECK(find(text, "HAPPI") == string("Happi"));
    CHECK(find(text, "happI") == string("Happi"));
    CHECK(find(text, "hapPI") == string("Happi"));
    CHECK(find(text, "haPPI") == string("Happi"));
    CHECK(find(text, "hAPPI") == string("Happi"));
    CHECK(find(text, "haPPI") == string("Happi"));
    CHECK(find(text, "HaPpI") == string("Happi"));
    CHECK(find(text, "hApPi") == string("Happi"));
    CHECK(find(text, "haPPI") == string("Happi"));
    

}
TEST_CASE("Test replacement of lower-case and upper-case ") {
    string text = "Happy xxx yyy";
    CHECK(find(text, "happy") == string("Happy"));
    CHECK(find(text, "Happy") == string("Happy"));
    CHECK(find(text, "hAppy") == string("Happy"));
    CHECK(find(text, "haPpy") == string("Happy"));
    CHECK(find(text, "HapPy") == string("Happy"));
    CHECK(find(text, "happY") == string("Happy"));
    CHECK(find(text, "HAppy") == string("Happy"));
    CHECK(find(text, "HAPpy") == string("Happy"));
    CHECK(find(text, "HAPPy") == string("Happy"));
    CHECK(find(text, "HAPPY") == string("Happy"));
    CHECK(find(text, "happY") == string("Happy"));
    CHECK(find(text, "hapPY") == string("Happy"));
    CHECK(find(text, "haPPY") == string("Happy"));
    CHECK(find(text, "hAPPY") == string("Happy"));
    CHECK(find(text, "haPPY") == string("Happy"));
    CHECK(find(text, "HaPpY") == string("Happy"));
    CHECK(find(text, "hApPy") == string("Happy"));
    CHECK(find(text, "haPPY") == string("Happy"));
    

}

TEST_CASE("Test replacement of lower-case and upper-case ") {
    string text = "Worry xxx yyy";
    CHECK(find(text, "worry") == string("Worry"));
    CHECK(find(text, "Worry") == string("Worry"));
    CHECK(find(text, "wOrry") == string("Worry"));
    CHECK(find(text, "woRry") == string("Worry"));
    CHECK(find(text, "worRy") == string("Worry"));
    CHECK(find(text, "worrY") == string("Worry"));
    CHECK(find(text, "WOrry") == string("Worry"));
    CHECK(find(text, "WORry") == string("Worry"));
    CHECK(find(text, "WORRy") == string("Worry"));
    CHECK(find(text, "WORRY") == string("Worry"));
    CHECK(find(text, "worrY") == string("Worry"));
    CHECK(find(text, "worRY") == string("Worry"));
    CHECK(find(text, "woRRY") == string("Worry"));
    CHECK(find(text, "wORRY") == string("Worry"));
    CHECK(find(text, "WoRrY") == string("Worry"));
    CHECK(find(text, "wOrRy") == string("Worry"));
    CHECK(find(text, "WOrrY") == string("Worry"));
    CHECK(find(text, "WORrY") == string("Worry"));

}

TEST_CASE("Test replacement of lower-case and upper-case ") {
    string text = "Dont xxx yyy";
    CHECK(find(text, "dont") == string("Dont"));
    CHECK(find(text, "Dont") == string("Dont"));
    CHECK(find(text, "DOnt") == string("Dont"));
    CHECK(find(text, "DONt") == string("Dont"));
    CHECK(find(text, "DONT") == string("Dont"));
    CHECK(find(text, "donT") == string("Dont"));
    CHECK(find(text, "doNT") == string("Dont"));
    CHECK(find(text, "dONT") == string("Dont"));
    CHECK(find(text, "DoNt") == string("Dont"));
    CHECK(find(text, "dOnT") == string("Dont"));


}