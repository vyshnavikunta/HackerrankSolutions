/*
Given a positive integer N, print the sum of 1st N natural numbers.

Input Format

First and only line of input contains a positive integer - N.

Constraints

1 <= N <= 104

Output Format

Print the sum of 1st N natural numbers.

Sample Input 0

4
Sample Output 0

10
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int n,i,  sum=0;;
    scanf("%ld",&n);
  
    for(i=1;i<=n;i++)
    {   sum+= i;} 
    printf("%ld",sum);
       
    return 0;
}
