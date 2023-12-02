/*
Print hollow rectangle pattern using '*'. See example for more details.

Input Format

Input contains two integers W - width of the rectangle and L - length of the rectangle.

Constraints

2 <= W <= 50
2 <= L <= 50

Output Format

For the given integers W and L, print the hollow rectangle pattern.

Sample Input 0

5 4
Sample Output 0

*****
*   *
*   *
*****
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int w,l,i,j;
    scanf("%d %d",&w,&l);
    for(i=1;i<=l;i++)
    {   for(j=1;j<=w;j++)
        {   if((i==1)||(i==l)||(j==1)||(j==w))
               {    printf("*");}
        
               else
               printf(" ");
               }
                printf("\n");}  
    return 0;
}
