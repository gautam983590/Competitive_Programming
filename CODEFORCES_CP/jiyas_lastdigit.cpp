#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; // no. of test cases 
    cin >> t;
    while (t--){
        int n;
        cin>> n;
        long long digit = 1;
        for(int i=0; i<n ; i++){
            int x;
            cin >> x;
            digit*=x;
        }
        digit%=10;
        if(digit==2 || digit == 3 || digit == 5){
            cout << "YES";
        }
        else cout << "NO";
    }
    return 0;
}