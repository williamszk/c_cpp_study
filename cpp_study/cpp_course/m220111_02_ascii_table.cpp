// https://www.youtube.com/watch?v=GQp1zzTwrIg&t=3900s&ab_channel=CodeBeauty
// American Standard Code for Information Interchange - ASCII
#include <iostream>
using namespace std;

int main()
{
    // below we are using a casting operator
    cout << (int)'a' << endl;
    // 97
    // in ascii 'a' is equivalent to 97
    cout << int('A') << endl;
    // note that we use a different way of type conversion in here
    // 65
    // in ascci 'A' is equivalent to 65

    // we can also convert an int into an ASCII character
    cout << char('A') << endl;
}