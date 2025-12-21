// for each test cases % (M) = 10^9 + 7 
// 1 <= T < 100000
// 1 <= N < 100000
#include<bits/stdc++.h>
using namespace std;

const int  M = 1e9+7;
int main (){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        int fact = 1;
        for(int i=1; i<=N; i++){
        fact = (fact*i)%M;
        }
        cout << fact << endl;
    }
    return 0;
}