#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}
int main (){
    int t;
    cin >> t;
    while(t--){
        int n,q;
        cin >> n;
        cin >> q;
        int a[n+10];
        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        
        
        while(q--){
            int L,R;
            cin >> L >> R;
            int gc =0;
            for(int i=1; i<=L-1; i++){
                gc = gcd(gc,a[i]);
            }
            for(int i=R+1; i<=n; i++){
                gc = gcd(gc,a[i]);
            }
            cout << gc << endl;
        }
    }
    return 0;
}
// 0( T * ( N + Q * ( ) ) )