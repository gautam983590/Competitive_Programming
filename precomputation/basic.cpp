// using precomputation to decrease  the time complexity
#include <bits/stdc++.h>
using namespace std;
const int M = 1e9 + 7;
const int N = 1e5 + 10;
long long fact[N];
int main()
{

    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
    {
        fact[i] = fact[i - 1] * i;
    }
    int T;
    cin >> T;
    while (T--)
    {
        int N;
        cin >> N;
        cout << (fact[N] % M) << endl;
    }
    return 0;
}
// O(new)=O(N)+O(T) = O(10^5) + O(10^5) = O(10^5)