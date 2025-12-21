#include<bits/stdc++.h>
using namespace std;
char upper (char c){
    if( c>='a' && c<='z'){
        c-=32;
    }
    return c;
}

int main (){
    while(true){
        string s;
        cin >> s;
        if(sizeof(s)==0){
            break;
        }
        for( int i =0; i<sizeof(s); i++){
            s[i] = upper(s[i]);
        }
        cout<< s << endl;
    }
}