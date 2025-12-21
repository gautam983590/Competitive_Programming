#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;   // read number of test cases
    
    while (t--) {
        int n;
        cin >> n;

        int con;
        if (n % 2 != 0) {
            con = 0;
        } else if (n % 4 != 0) {
            con = (n - 2) / 4 + 1;
        } else {
            con = n / 4 + 1;
        }

        cout << con << endl; 
    }

    return 0;
}
