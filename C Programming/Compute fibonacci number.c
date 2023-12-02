/*
For a given positive integer - N, compute Nth fibonacci number.

Input Format

First and only line of input contains a positive number - N.

Constraints

1 <= N <= 20

Output Format

Print the Nth fibonacci number.

Sample Input 0

4
Sample Output 0

3
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,n1=0,n2=1,r = 0,i;
    scanf("%d",&n);
    if(n == 0 || n == 1)
        printf("%d",n);
   else 
   { r = n1 + n2;
    for(i=3;i<=n;i++)
    {   n1 = n2;
        n2 = r;
        r = n1 + n2;
    }
   
    printf("%d",r);
   }     
    return 0;
}
