/*
Given 2 numbers - a and b, evaluate ab.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line containing 2 numbers - a and b, separated by space.

Constraints

30 points
1 <= T <= 1000
0 <= a <= 106
0 <= b <= 103

70 points
1 <= T <= 1000
0 <= a <= 106
0 <= b <= 109

Output Format

For each test case, print ab, separated by new line. Since the result can be very large, print result % 1000000007

Sample Input 0

4
5 2
1 10
2 30
10 10
Sample Output 0

25
1
73741817
999999937
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

const long long mod=1000000007;

long long pow(long long b,long long e){
    long long r=1;
    b=b%mod;
    while(e>0){
        if(e%2 == 1){
            r=(r*b)%mod;
        }
        b=(b*b)%mod;
        e=e/2;
    }
    return r;
    }
int main() {
       
    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long r=pow(a,b);
        cout<<r<<endl;
    }
    return 0;
}
