/*
Given two integers a and b, compute a power b.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First and only line of input contains two positive integers a and b.

Constraints

1 <= a <= 100
0 <= b <= 9

Output Format

Print a power b.

Sample Input 0

2 3
Sample Output 0

8
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int b;
    long long int a;
    scanf("%lld %d",&a,&b);
    printf("%.0f",pow(a,b));
      
    return 0;
}
