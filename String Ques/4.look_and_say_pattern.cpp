#include <bits/stdc++.h>
using namespace std;
string lookandsay(int n);
int main()
{
    int n;
    cin >> n;
    cout << lookandsay(n);
    return 0;
}
string lookandsay(int n){
    if (n == 1) return "1";
    string current = "1"; 
    string next;
    char prevChar;
    int count;
    for (int i = 2; i <= n; i++){
        next = "";
        prevChar = current[0];
        count = 1;
        for (int j = 1; j < current.length(); j++){
            if (current[j] == prevChar) count++;
            else{
                next += to_string(count) + prevChar;
                prevChar = current[j];
                count = 1;
            }
        }
        next += to_string(count) + prevChar;
        current = next;
    }
    return current;
}