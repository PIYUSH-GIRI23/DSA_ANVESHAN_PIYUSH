#include <bits/stdc++.h>
using namespace std;
vector<int> singleNumber(vector<int> nums) {
    vector<int> v;
    int x = 0;
    for (auto i : nums) x = x ^ i;
    int rightmostSetBit = x & (-x);
    int num1 = 0, num2 = 0;
    for (auto i  : nums) {
        if (i & rightmostSetBit) num1 = num1 ^ i;
        else num2 = num2 ^ i;
    }
    v.push_back(num1);
    v.push_back(num2);
    sort(v.begin(), v.end());
    return v;
}
int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (auto &i : nums) cin >> i;
    vector<int> ans = singleNumber(nums);
    for (auto i : ans) cout << i << " ";    
    return 0;
}