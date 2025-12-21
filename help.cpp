#include<bits/stdc++.h>
using namespace std;
//learning nesting of vectors
void printvec(vector<pair<int,int>> v){
    int n = v.size();
    cout << "size : " << n << endl;
    for(int i=0; i<n; i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
}

int main(){
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    printvec(v_p);
}