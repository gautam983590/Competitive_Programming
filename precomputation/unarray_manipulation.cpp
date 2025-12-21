/*Starting with a 1-indexed array of zeros and a list of operations,
for each operation add a value to each array element between two given indices,
inclusive. Once all operations have been performed, return the maximum value in the array.

Example


Queries are interpreted as follows:

    a b k
    1 5 3
    4 8 7
    6 9 1
Add the values of  between the indices  and  inclusive:

image

The largest value is  after all operations are performed.

Function Description

Complete the function  with the following parameters:

: the number of elements in the array
: a two dimensional array of queries where each  contains three integers, , , and .
Returns

: the maximum value in the resultant array
Input Format

The first line contains two space-separated integers  and , the size of the array and the number of queries.
Each of the next  lines contains three space-separated integers ,  and , the left index, right index and number to add.

Constraints

Sample Input

STDIN       Function
-----       --------
5 3
1 2 100
2 5 100
3 4 100
Sample Output
*/

#include <bits/stdc++.h>
using namespace std;
const int N = 1e7 + 7;
long long int ar[N];
int main()
{
    int n, m;
    cin >> n >> m;
    while (m--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        for (int i = a; i <= b; i++)
        {
            ar[i] += k;
        }
    }
    long long max = ar[1];
    for (int i = 2; i <= n; i++)
    {
        if (max < ar[i])
        {
            max = ar[i];
        }
    }
    cout << max << endl;
}