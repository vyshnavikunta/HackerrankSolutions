/*
Given a positive integer N, print the sum of cubes of 1st N natural numbers.

Input Format

First and only line of input contains a positive integer - N.

Constraints

1 <= N <= 102

Output Format

Print the sum of cubes of 1st N natural numbers.

Sample Input 0

4
Sample Output 0

100
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n,sum=0,i;
    scanf("%ld",&n);
    for(i=0;i<=n;i++)
    {   sum += i*i*i;
    }
    printf("%ld",sum);
      
    return 0;
}
