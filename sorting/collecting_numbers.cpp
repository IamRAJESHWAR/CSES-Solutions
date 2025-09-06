#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main()
{
    int n;
    cin >> n;
    int arr[n + 1];
    int brr[1000000] = {0};

    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    int maxt = arr[1];

    for (int i = 1; i <= n; i++)
    {
        maxt = max(arr[i], maxt);
        brr[arr[i]] = i;
    }

    int count = 0;

    for (int i = 1; i < maxt; i++)
    {
        if (brr[i] > brr[i + 1])
        {
            count++;
        }
    }
    cout << count + 1;
}
