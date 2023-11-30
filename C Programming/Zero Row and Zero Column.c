/*
Given a matrix A of size N x M. Elements of the matrix are either 0 or 1. If A[i][j] = 0, set all the elements in the ith row and jth column to 0. Print the resultant matrix.

Input Format

First line of input contains N, M - the size of the matrix A. Its followed by N lines each containing M integers - elements of the matrix.

Constraints

1 <= N, M <= 100
A[i][j] ∈ {0,1}

Output Format

Print the resultant matrix.

Sample Input 0

4 5
0 1 1 0 1 
1 1 1 1 1 
1 1 0 1 1 
1 1 1 1 1 
Sample Output 0

0 0 0 0 0 
0 1 0 0 1 
0 0 0 0 0 
0 1 0 0 1 
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
            if(mat[i][j] == 0){
                for(int k=0;k<m;k++){
                    if(mat[i][k] == 1){
                        mat[i][k] = -1;
                    }
                }
                for(int l=0;l<n;l++){
                    if(mat[l][j] == 1){
                        mat[l][j] = -1;
                    }
                }
            }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j] == -1){
                mat[i][j]=0;
            }
        printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}
