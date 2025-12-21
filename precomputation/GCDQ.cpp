#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int a[N];
int main (){
    int T;
    cin >> T;
    while(T--){
        int n,q;
        cin >> n >> q;

        int fwd_gcd[n+10];
        int bwd_gcd[n+10];
        fwd_gcd[0]=bwd_gcd[n+1]=0;
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        for(int i=1; i<=n; i++){
            fwd_gcd[i] = __gcd(fwd_gcd[i-1],a[i]);
        }
        for(int i=n; i>=1; i--){
            bwd_gcd[i] = __gcd(bwd_gcd[i+1],a[i]);
        }

        
        while(q--){
            int L,R;
            cin >> L >> R;
            cout << __gcd(fwd_gcd[L-1],bwd_gcd[R+1]) << endl;
        }
    }
}