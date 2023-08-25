#include <iostream>
using namespace std;
void convert_binary_to_decimal(string s){
    int n=0;
    for(int i=0;i<s.length();i++){
        n=n*2+(s[i]-'0');
    }
    cout<<endl<<"The decimal equivalent of "<<s<<" is "<<n;
}
int main()
{   
    cout<<"Enter the binary number: ";
    string s;
    cin>>s;
    convert_binary_to_decimal(s);
    return 0;
}