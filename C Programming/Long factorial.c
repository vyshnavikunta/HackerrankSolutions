/*
Given a non-negative number - N, print N!

Input Format

First and only line of input contains a number - N.

Constraints

0 <= N <= 20

Output Format

Print factorial of N.

Sample Input 0

3
Sample Output 0

6
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n,i,f=1;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
        f = f*i;
    printf("%ld",f);
       
    return 0;
}
