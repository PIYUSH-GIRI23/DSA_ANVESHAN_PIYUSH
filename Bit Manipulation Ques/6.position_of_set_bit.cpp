#include <bits/stdc++.h>
using namespace std;
int findPosition(int N) {
        // code here
        int n=N;
        if(N==0) return -1;
        if(N==1) return 1;
        while(N>1){
            if(N%2!=0) return -1;
            N=N>>1;
        }
        int count=1;
        while(n>1){
            count++;
            n=n>>1;
        }
        return count;
    }
int main()
{
    int n;
    cin >> n;
    cout << findPosition(n);
    return 0;
}