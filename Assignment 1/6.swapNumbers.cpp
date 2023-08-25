#include <iostream>
using namespace std;
void swap_numbers(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
int main()
{
    cout<<"Enter the two numbers: ";
    int a,b;
    cin>>a>>b;
    cout<<"Before swapping: "<<a<<" "<<b<<endl;
    swap_numbers(a,b);
    cout<<"After swapping: "<<a<<" "<<b<<endl;
    return 0;
}