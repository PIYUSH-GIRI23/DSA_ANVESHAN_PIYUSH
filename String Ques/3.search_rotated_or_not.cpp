#include <bits/stdc++.h>
using namespace std;
bool areRotations(string s1, string s2)
{
    if (s1.length() != s2.length()) return false;
    string temp = s1 + s1;
    if (strstr(temp.c_str(), s2.c_str())) return true;
    return false;
}
int main()
{
    string s1, s2;
    cin >> s1 >> s2;
    cout << areRotations(s1, s2);
    return 0;
}