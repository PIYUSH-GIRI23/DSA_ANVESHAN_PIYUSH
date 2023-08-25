#include <iostream>
using namespace std;
void char_check(char c){
    if(c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z') cout << "Alphabet" << endl;
    else if(c >= '0' && c <= '9') cout << "Digit" << endl;
    else cout << "Special Character" << endl;
}
int main()
{
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    char_check(ch);
    return 0;
}