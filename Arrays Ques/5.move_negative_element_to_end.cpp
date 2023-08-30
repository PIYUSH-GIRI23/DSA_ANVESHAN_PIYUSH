#include <bits/stdc++.h>
using namespace std;
void segregateElements(vector <int> &arr,int n)
    {
        int arr2[n];
        int p=0;
        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                arr2[p]=arr[i];
                p++;
            }
        }
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                arr2[p]=arr[i];
                p++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=arr2[i];
        }
    }
int main()
{
    vector<int> v;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    segregateElements(v,n);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}