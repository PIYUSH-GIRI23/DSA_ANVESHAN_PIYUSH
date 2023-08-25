#include <iostream>
using namespace std;
void reverse_number(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+n%10;
        n/=10;
    }
    cout<<endl<<"The reverse of the number is "<<rev;
}
int main()
{
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    reverse_number(n);
    return 0;
}