/*map is a data structure which stores key value pairs
int    string
 1       abc
 5       cde
 3       acd
 */
#include<bits/stdc++.h>
using namespace std;
void print(map<int,string> m){
    for(auto &pr : m){
        cout << pr.first << " " << pr.second << endl;// pr value ko access karne ki time complexitity bhi O(logn) hai
    }
}
int main (){
    map<int,string> m;
    m[1]="abc";  // iski time complexity O(logn) hai
    m[5]="bcd";
    m[3]="cde";
    m[5]="def"; // map ki unique pair of value hoti h isliye iski value change ho jayegi duplicate value nhi hoga 
    // m[4]; sirf declare kare se string me empty string store hoga and integer mein 0 hoga
    m.insert({4,"ajf"});
    // map<int,string> :: iterator it ;
    // for(it = m.begin(); it!=m.end(); it++){
    //     cout << (*it).first << " " << (*it).second << endl; 
    // }
    auto it = m.find(3);
    if(it == m.end()){
        cout << "No value" << endl;
    }
    else{
        cout << (*it).first << " " << (*it).second << endl;
    }
    m.erase(3); // it will delete 
    m.clear();
    print(m);
}