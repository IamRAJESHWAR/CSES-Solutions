#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x;
    cin >> n >> x;
    vector<pair<int, int>> mp;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        mp.push_back({val, i + 1});
    }
    int flag = 0;
    int head = 0;
    int tail = n - 1;
    sort(mp.begin(), mp.end());
    if (n > 1)
    {
        while (head < tail)
        {
            if ((mp[head].first + mp[tail].first) == x)
            {
                flag = 1;
                cout << mp[head].second << " " << mp[tail].second << "\n";
                head++;
                tail--;
                break;
            }
            else if ((mp[head].first + mp[tail].first) < x)
            {
                head++;
            }
            else
                tail--;
        }
        if (flag == 0)
        {
            cout << "IMPOSSIBLE" << "\n";
        }
    }
    else
    {
        cout << "IMPOSSIBLE" << "\n";
    }
}