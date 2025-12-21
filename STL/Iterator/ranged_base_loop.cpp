#include <bits/stdc++.h>
using namespace std;
int main (){
    vector<int> v={1,2,3,5,7};
    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    vector<int> :: iterator it;
    for(it=v.begin(); it!=v.end(); it++){
        cout << (*it) << " ";
    }
    cout << endl;
    for(int  value : v){
        cout << value << " ";
    }
    cout << endl;
    vector<pair<int,int>> v_p = {{1,2},{2,3},{3,4}};
    for( pair<int,int> &value : v_p){
        cout << value.first << " " << value.second << endl;
    }
    cout << endl;
}