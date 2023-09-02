#include <bits/stdc++.h>
using namespace std;
int rowWithMax1s(vector<vector<int>>& arr, int n, int m) {
    int maxCount = 0;  
    int ans = -1;      
    for (int i = 0; i < n; i++) {  
        int rowCount = count(arr[i].begin(), arr[i].end(), 1);  
        if (rowCount > maxCount) {
            maxCount = rowCount;
            ans = i;  
        }
    }
    return ans;  
}
int main()
{
    vector <vector<int>> matrix;
    int n,m;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        vector<int> temp;
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            temp.push_back(x);
        }
        matrix.push_back(temp);
    }
    cout<<rowWithMax1s(matrix,n,m);
    return 0;
}