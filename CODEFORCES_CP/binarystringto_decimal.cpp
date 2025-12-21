#include<bits/stdc++.h>
using namespace std;
int main (){
    int t; // no. of test cases
    cin >> t;
    while(t--){
        int n;// size of string
        cin >> n;
        char c;
        unsigned long long int x = 0;
        for(int i=0; i<n ; i++){
            cin >> c;
            x = (x<<1)|(c-'0');
        }
        cout << x <<endl;
    }
}