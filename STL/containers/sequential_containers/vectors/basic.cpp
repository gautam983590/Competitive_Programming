#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v){
    cout << "size : " << v.size() << endl;
    for(int i = 0; i < v.size();++i){
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main (){
    int a[10];
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x); // O(1)
        print_vector(v);
    }
}