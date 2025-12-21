#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int hsh[26][N]; // Declare outside main loop

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int q, n;
        cin >> n >> q;
        string s;
        cin >> s;

        // Only reset needed part
        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j <= n + 1; j++)
            {
                hsh[i][j] = 0;
            }
        }

        for (int i = 0; i < n; i++)
        {
            hsh[s[i] - 'a'][i + 1]++;
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 1; j <= n; j++)
            {
                hsh[i][j] += hsh[i][j - 1];
            }
        }

        while (q--)
        {
            int L, R;
            cin >> L >> R;
            int oddct = 0;
            for (int i = 0; i < 26; i++)
            {
                int charct = hsh[i][R] - hsh[i][L - 1];
                if (charct % 2 == 1)
                {
                    oddct++;
                }
            }
            if (oddct > 1)
            {
                cout << "NO\n";
            }
            else
            {
                cout << "YES\n";
            }
        }
    }
}
