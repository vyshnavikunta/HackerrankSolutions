/*
Print rectangle pattern. See example for more details.

Input Format

First and only line of input contains a single integer N - the size of the rectangle.

Constraints

1 <= N <= 50

Output Format

For the given integer, print rectangle pattern as shown in example.

Sample Input 0

5
Sample Output 0

5432*
543*1
54*21
5*321
*4321
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n,i,j;
    scanf("%d",&n);
    //m=1;
    for(i=1;i<=n;i++)
    {   for(j=n;j>0;j--)
        { if(j==i)
            printf("*");
         else
             printf("%d",j);
        }
        //m++;
        printf("\n");}
   
    return 0;
}
