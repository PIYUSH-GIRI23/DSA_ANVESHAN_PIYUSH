#include <bits/stdc++.h>
using namespace std;
int isPalindrome(string S)
	{
	    int x = S.length();
	    // Your code goes here
	    for(int i=0;i<x/2;i++){
	        if(S[i]!=S[x-i-1]) return 0;
	    }
	    return 1;
	}
int main()
{
    string s;
    cin>>s;
    cout<<isPalindrome(s);
    return 0;
}