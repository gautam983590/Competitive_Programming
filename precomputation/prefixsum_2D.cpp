/*Constraints

1 <= N <= 10^3
1 <= a[i][j] <= 10^9
1 <= 0 <= 10^5
1 <= a,b,c,d <= N
*/
#include<bits/stdc++.h>
using namespace std;
const int N = 1e3+5;
int a[N][N];
int pf[N][N];
int main (){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
            pf[i][j] = pf[i][j-1] + pf[i-1][j] - pf[i-1][j-1] + a[i][j];
        }
    }
    int Q;
    cin >> Q;
    while(Q--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        cout << pf[c][d] - pf[a-1][d] - pf[c][b-1] + pf[a-1][b-1] << endl;
    }

    
}