#include <bits/stdc++.h>
using namespace std;
int countBitsFlip(int a, int b){
        // Your logic here --> flip bits of a
        int x=a^b;
        if(a==b) return 0;
        int count=1;
        while(x>1){
            if(x%2!=0) count++;
            x=x/2;
        }
        return count;
    }
int main()
{
    int a,b;
    cin>>a>>b;
    cout<<countBitsFlip(a,b);
    return 0;
}