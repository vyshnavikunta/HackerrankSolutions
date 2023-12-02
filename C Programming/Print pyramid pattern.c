/*
Print pyramid pattern using '*'. See example for more details.

Input Format

First and only line of input contains a single integer N - the size of the pyramid.

Constraints

1 <= N <= 50

Output Format

For the given integer, print pyramid pattern.

Sample Input 0

5
Sample Output 0

    *
   ***
  *****
 *******
*********
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i,j,k;
    scanf("%d",&n);
    for(i=1;i<=n;i++,k=0)
    {   for(j=1;j<=n-i;j++)
        {  // k = 0;
            printf(" ");}
        while(k != 2*i-1)
        {   printf("*");
            k++;}
            printf("\n");}
      
    return 0;
}
