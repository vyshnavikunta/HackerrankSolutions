/*
Given a matrix of size N x M, print the matrix in zig-zag order. Refer example for more details.

Input Format

The first line of input contains N, M - the size of the matrix. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
-106 <= ar[i] <= 106

Output Format

Print the matrix elements in zig-zag order.

Sample Input 0

3 3
5 9 -2
-3 4 1
2 6 1
Sample Output 0

5 9 -2 1 4 -3 2 6 1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

     
    int n,m;
    scanf("%d %d",&n,&m);
    int mat[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            scanf("%d",&mat[i][j]);
        }
    }
   
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(i%2 == 0){
               printf("%d ",mat[i][j]);
           }
            else{
                printf("%d ",mat[i][m-1-j]);
            }
        }
    }
    return 0;
}
