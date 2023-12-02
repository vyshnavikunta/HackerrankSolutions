/*
Print half diamond pattern using '*'. See example for more details.

Input Format

First and only line of input contains a single integer N.

Constraints

1 <= N <= 50

Output Format

For the given integer, print the half diamond pattern.

Sample Input 0

5
Sample Output 0

*
**
***
****
*****
****
***
**
*
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   for(j=1;j<=i;j++)
      {   printf("*");
    }
    printf("\n");}
    for(i=1;i<=n-1;i++)
    {   for(j=1;j<=n-i;j++)
        {   printf("*");}
        printf("\n");}
     
    return 0;
}
