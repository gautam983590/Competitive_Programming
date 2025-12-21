// Given an array a of n integers. 
// given Q querries and in each querries given a number x.
// print count of that number in the array
// constraints ;
// 1 <= N <= 10^5
// 1 <= Q <= 10^5
// 1 <= a[i] <= 10^7

#include<bits/stdc++.h>
using namespace std;
const int N = 1e7+10;
int hsh[N]; // global array hamesh zero initialize hoti h
int main (){
    int n;
    cin >> n;
    int a[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
        hsh[a[i]]++;
    }
    int Q;
    cin >> Q;
    while(Q--){
        int x;
        cin >> x;
        cout << hsh[x] << endl;
    }
}
//old( before hashing ) O(n) + O(Q*n) = O(n^2)
// new (after hashing)  O(n) + O(Q) = O(n)