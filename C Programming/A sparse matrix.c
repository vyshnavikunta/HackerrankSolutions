/*
Given a matrix of size N x M, print whether it is a sparse matrix or not.
Note: If a matrix contain 0 in more than half of its cells, then it is called a sparse matrix.

Input Format

First line of input contains N, M - size of the matrix. Its followed by N lines each containing M intergers - elements of the matrix.

Constraints

1 <= N, M <= 100
0 <= ar[i] <= 109

Output Format

Print "Yes" if the given matrix is a sparse matrix, otherwise print "No".

Sample Input 0

2 3
5 0 0
0 8 0
Sample Output 0

Yes
  */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,m,a[100][100],cnt=0,i,j;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {   for(j=0;j<m;j++)
        { scanf("%d",&a[i][j]); }
    }
    for(i=0;i<n;i++)
    {   for(j=0;j<m;j++)
        {   if(a[i][j] == 0)
                cnt++;        
         }
    }
    if(cnt >(m*n)/2)
        printf("Yes");
    else
        printf("No");
     
    return 0;
}
