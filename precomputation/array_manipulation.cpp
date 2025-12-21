#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 7;
int ar[N];
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        ar[a] += k;
        ar[b + 1] -= k;
    }
    long long max = ar[1];
    for (int i = 1; i <= n; i++)
    {
        ar[i] += ar[i - 1];
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    cout << max << endl;
}