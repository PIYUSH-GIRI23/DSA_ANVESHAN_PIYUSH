#include <bits/stdc++.h>
using namespace std;
int findLargestPower(int n){
    int x = 0;
    while ((1 << x) <= n) x++;
    return x - 1;
}
unsigned int countSetBits(unsigned int n){
    if (n <= 1) return n;
    int x = findLargestPower(n);
    return (x * pow(2, (x - 1))) + (n - pow(2, x) + 1) + countSetBits(n - pow(2, x));
}
int main()
{
    int N ;
    cin >> N;
    cout << countSetBits(N) << endl;
    return 0;
}