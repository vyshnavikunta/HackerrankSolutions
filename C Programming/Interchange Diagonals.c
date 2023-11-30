/*
Given a matrix A of size NxN, interchange the diagonal elements from top to bottom and print the resultant matrix.

Input Format

First line of input contains N - the size of the matrix. Its followed by N lines each containing N integers - elements of the matrix.

Constraints

1 <= N <= 100
1 <= A[i][j] <= 10000

Output Format

Print the matrix after interchanging the diagonals.

Sample Input 0

4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Sample Output 0

4 2 3 1
5 7 6 8
9 11 10 12
16 14 15 13
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

       
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        int temp = arr[i][i];
        arr[i][i] = arr[i][n-i-1];
        arr[i][n-i-1] = temp;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
