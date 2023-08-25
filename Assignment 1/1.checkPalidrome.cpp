#include <iostream>
using namespace std;
void checkPalidrome(int n){
    int temp=n;
    int rev=0;
    while(temp>0){
        rev=rev*10+temp%10;
        temp/=10;
    }
    if(rev==n)cout<<"The number "<<n<<" is a Palidrome number.";
    else cout<<"The number "<<n<<" is not a Palidrome number.";
}
int main()
{
    cout<<"Enter the number: ";
    int n;
    cin>>n;
    checkPalidrome(n);
    return 0;
}