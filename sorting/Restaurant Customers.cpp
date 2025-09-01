#include <bits/stdc++.h>
using namespace std;
int k = 1e9;
int main()
{
    int n;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        mp[a] += 1;
        mp[b + 1] -= 1;
    }
    int cur = 0;
    int ans = 0;
    for (auto v : mp)
    {
        cur += v.second;
        ans = max(cur, ans);
    }
    cout << ans;
}