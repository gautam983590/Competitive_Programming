/*Problem
Time is precious. So lets get to the crux of the problem straightaway!

Given 3 positive numbers A, B and C. We make a set which contains numbers that are either multiples of A or B or (A and B) in increasing order. We take the C-th number of set and print from C-th number to 0 with a step value of A or B whichever it is multiple of and if its a multiple of both, then use step value as LCM(A, B)
 

Hint: It's recommended you implement this using continue and goto statements. ;)


Constraints:

2 <= A,B <= 1000 (A and B will not be equal)

1 <= C <= 1000

Input format:

One line containing numbers - A, B, and C

Output format:

One line containing values from C-th number to 0 with the corresponding step value.

Sample Input
3 5 14
Sample Output
30 15 0
Time Limit: 1
Memory Limit: 256*/

#include <iostream>
using namespace std;

// Function to calculate GCD

int gcd(int a, int b) {
    while (b) {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

// Function to calculate LCM
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int A, B, C;
    cin >> A >> B >> C;
	int cth_num,steps;

    for(int i=2; C>0; i++){
		if(i%A==0 || i%B==0){
			cth_num=i;
			C--;
		}
	}
	if(cth_num%A==0 && cth_num%B==0){
		steps=lcm(A,B);
	}
	else if(cth_num%A==0){
		steps=A;
	}
	else steps=B;
	
	for(int i=cth_num; i>=0; i-=steps){
		cout << i << " ";
	}

    return 0;
}
