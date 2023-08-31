#include <bits/stdc++.h>
using namespace std;
string reverseWord(string str)
    {
        // Your code goes here
        int s = str.length();
        for(int i=0;i<s/2;i++){
            char temp=str[i];
            str[i]=str[s-i-1];
            str[s-i-1]=temp;
        }
        return str;
        
    }
int main()
{
    string s;
    cin>>s;
    cout<<reverseWord(s);
    return 0;
}