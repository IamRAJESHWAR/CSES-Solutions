#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int cur_sum = a[0];
    int ans = a[0];

    for (int i = 1; i < n; i++)
    {
        cur_sum = max(a[i], a[i] + cur_sum);
        ans = max(ans, cur_sum);
    }
    cout << ans;
}
