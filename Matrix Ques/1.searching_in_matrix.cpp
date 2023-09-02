#include <bits/stdc++.h>
using namespace std;
bool search(vector<vector<int> > matrix, int n, int m, int z) {
        // code here 
        int x=0;
        int y=m-1;
        while(x<n && y>=0){
            if(matrix[x][y]==z) return true;
            if(matrix[x][y]>z) y--;
            else x++;
        }
        return false;
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
    cout<<endl<<"Enter the element to be searched: ";
    int z;
    cin>>z;
    cout<<search(matrix,n,m,z);
    return 0;
}   