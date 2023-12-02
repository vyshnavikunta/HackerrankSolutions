/*
Given a positive integer N, print the sum of squares of 1st N natural numbers.

Input Format

First and only line of input contains positive integer - N.

Constraints

1 <= N <= 103

Output Format

Print the sum of squares of 1st N natural numbers.

Sample Input 0

15
Sample Output 0

1240
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n,sum=0,i;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {   sum += i*i;}
    printf("%ld",sum);
     
    return 0;
}
