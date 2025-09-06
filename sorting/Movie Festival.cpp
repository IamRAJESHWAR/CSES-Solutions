#include <bits/stdc++.h>
using namespace std;
bool comparator(pair<int, int> a, pair<int, int> b)
{
    return a.second < b.second;
}
int main()
{
    int n;
    cin >> n;

    vector<pair<int, int>> p;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        p.push_back({a, b});
    }

    int count = 0;
    sort(p.begin(), p.end(), comparator);
    int last_element = 0;
    for (int i = 0; i < n; i++)
    {
        if (p[i].first >= last_element)
        {
            count++;
            last_element = p[i].second;
        }
    }
    cout << count;
}