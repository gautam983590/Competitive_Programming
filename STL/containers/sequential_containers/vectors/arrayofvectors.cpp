#include<bits/stdc++.h>
using namespace std;
void printvec(vector<int>v[], int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int N;
    cin >> N;
    vector<int> v[N];
    for(int i = 0; i<N; i++){
        int n;
        cin >> n;
        for(int j=0; j<n; j++){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    printvec(v,N);
}