/*given rectangle of lenth l and width b. print area of rectangle.
constraints:
1<= l <=10^9
1<= b <=10^9
input format:
2 space seperated integer l and b

output format
single number which is area of rectangle 
 sample input:
 3 4

 sample output :
 3 4

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int l , b;
    cin>>l>>b;
    cout<<l*1ll*b<<endl;
    cout<<l*b;
}