#include <iostream>
using namespace std;
int main()
{
    int n=1;
    while(n==1){
        float a,b;
        cout<<endl<<endl<<"Enter the numbers ";
        cin>>a>>b;
        cout<<endl<<"Enter the operation to be performed: ";
        char op;
        cin>>op;
        switch(op){
            case '+':
                cout<<endl<<a<<" + "<<b<<" = "<<a+b;
                break;
            case '-':
                cout<<endl<<a<<" - "<<b<<" = "<<a-b;
                break;
            case '*':
                cout<<endl<<a<<" X "<<b<<" = "<<a*b;
                break;
            case '/':
                cout<<endl<<a<<" / "<<b<<" = "<<a/b;
                break;
            default:
                cout<<endl<<"Invalid operation";
                n=0;
                break;
        }
    }
    return 0;
}