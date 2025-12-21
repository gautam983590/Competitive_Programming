#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> &v){
    cout << "size : " << v.size() << endl;
    for(int i = 0; i < v.size();++i){
        // v.size() -> O(1)
        cout << v[i] << " ";
    }
    v.push_back(2);
    cout << endl;
}

int main (){
    int a[10];
    vector<int> v(5);
    
    vector<int> v2=v;
    v2.push_back(5);
    print_vector(v);
    print_vector(v);
    print_vector(v2);
}