#include <iostream>
using namespace std;
int main()
{
    cout<<endl<<"Enter the number of rows and columns of the first matrix: ";
    int r1,c1;
    cin>>r1>>c1;
    cout<<endl<<"Enter the number of rows and columns of the second matrix: ";
    int r2,c2;
    cin>>r2>>c2;
    if(c1!=r2) cout<<endl<<"The matrices cannot be multiplied.";
    else{
        int a[r1][c1],b[r2][c2],c[r1][c2];
        cout<<endl<<"Enterring elements of Matrix-1: ";
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<endl<<"Enter the element at index ("<<i<<","<<j<<"): ";
                cin>>a[i][j];
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        cout<<endl<<"Enterring elements of Matrix-2: ";
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cout<<endl<<"Enter the element at index ("<<i<<","<<j<<"): ";
                cin>>b[i][j];
            }
            cout<<endl;
        }
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                c[i][j]=0;
                for(int k=0;k<c1;k++){
                    c[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        cout<<endl<<endl;
        cout<<"MATRIX-1 : "<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c1;j++){
                cout<<a[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl<<endl;
        cout<<"MATRIX-2 : "<<endl;
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                cout<<b[i][j]<<" ";
            }
            cout<<endl;
        } 
        cout<<endl<<endl;
        cout<<"PRODUCT OF MATRIX : "<<endl;
        for(int i=0;i<r1;i++){
            for(int j=0;j<c2;j++){
                cout<<c[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}