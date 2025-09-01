#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    multiset<int> v1;
    vector<int> v2(m);
    for (int i = 0; i < n; i++)
    {
        int ticket;
        cin >> ticket;
        v1.insert(ticket);
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v2[i];
    }
    // sort(v1.begin(),v1.end());
    for (auto v : v2)
    {
        auto it = v1.upper_bound(v);

        if (it == v1.begin())
        {
            cout << -1 << "\n";
        }
        else
        {
            it--;
            cout << *it << "\n";
            v1.erase(it);
        }
    }
    cout << "\n";
}
