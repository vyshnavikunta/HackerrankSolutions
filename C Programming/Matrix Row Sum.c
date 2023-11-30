/*
Given a matrix of size N x M, print row-wise sum, separated by a newline.
Note: Try to solve this without declaring/storing the matrix.

Input Format

First line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-106 <= ar[i] <= 106

Output Format

Print row-wise sum of the matrix, separated by a newline.

Sample Input 0

2 3
5 -1 3
19 8 -5
Sample Output 0

7
22
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
     int sum=0,n,i,j,m,a[100][100];
     scanf("%d %d",&m,&n);
     for(i=0;i<m;i++)
     {  for(j=0;j<n;j++)
           scanf("%d",&a[i][j]);}
     for(i=0;i<m;i++)
     {  sum=0;
        for(j=0;j<n;j++)
        { sum += a[i][j];}
        printf("%d\n",sum);
     }
   
    return 0;
}
