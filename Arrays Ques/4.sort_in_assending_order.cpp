// Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.\

#include <bits/stdc++.h>
using namespace std;
void sort012(vector <int> &a, int n)
    {
        int zero=0;
        int one=0;
        int two=0;
        for(int i=0;i<n;i++){
            if(a[i]==0) zero++;
            else if(a[i]==1) one++;
            else two++;
        }
        int p=0;
        while(zero>0){
            a[p]=0;
            p++;
            zero--;
        }
        while(one>0){
            a[p]=1;
            p++;
            one--;
        }
        while(two>0){
            a[p]=2;
            p++;
            two--;
        }
    }
int main()
{
    int n;
    cin>>n;
    vector<int> a;
    for(int i =0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);  
    }
    sort012(a,n);
    for(int i =0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}