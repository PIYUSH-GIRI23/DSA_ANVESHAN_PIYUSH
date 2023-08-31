#include <bits/stdc++.h>
using namespace std;
bool isPowerofTwo(long long n){
        
        // Your code here  
        int count=0;
        if(n==1) return true;
        if(n==0) return false;
        while(n>1){
            if(n%2!=0) return false;
            n=n>>1;
        }
        return true;
}       
int main()
{
    long long n;
    cin >> n;
    cout << isPowerofTwo(n);
    return 0;
}