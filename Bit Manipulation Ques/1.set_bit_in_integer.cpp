#include <bits/stdc++.h>
using namespace std;
int setBits(int N) {
    int x=1;
    if(N==0) return 0;
    while(N>1){
        if(N%2!=0) x+=1;
        N=N/2;
    }
    return x;
}
int main()
{
    int n;
    cin>>n;
    cout<<setBits(n);
    return 0;
}