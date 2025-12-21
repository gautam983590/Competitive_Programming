/*Given an array of a of N integers. 
Given querries Q and in each querries given L and R 
print sum of element of array elements from index L to R( L,R included) 
Constraints :
1 <= a[i] <= 10^9
1 <= N <= 10^5
1 <= Q <= 10^5
1 <= L,R <= N
*/

#include<bits/stdc++.h>
using namespace std;
const  int n = 1e5+10;
int a[n];
int pf[n];
int main (){
    int N;
    cin >> N;
    for(int i=1; i<=N; i++){
        cin >> a[i];
        pf[i] = pf[i-1] + a[i];
    }
    int Q;
    cin >> Q;
    while(Q--){
        int L,R;
        cin >> L >> R;
        cout << pf[R] - pf[L-1] << endl;
    }
}
// 0(n)+O(n*Q) = O(n^2) = 10^10