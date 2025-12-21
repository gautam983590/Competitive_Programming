#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<string> v){
    cout << "size : " << v.size() << endl;
    for(int i = 0; i < v.size();++i){
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main (){
    int n;
    cin >> n;
    vector<string> v;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        v.push_back(s);
    }
    print_vector(v);
}