/*
Given an array A of size N. Construct an array B, such that B[i] is calculated as follows:

Find leftSum => sum of elements to the left of index i in array A; if none, use 0.
Find rightSum => sum of elements to the right of index i in array A; if none, use 0.
B[i] = | leftSum - rightSum |
Your task is to simply print the B array.

Input Format

First line of input contains N - size of the array. The next line contains N integers of array A.

Constraints

1 <= N <= 100
0 <= arr[i] <= 105

Output Format

Print the elements of the B array separated by space.

Sample Input 0

3
6 7 7 
Sample Output 0

14 1 13 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    
    int n;
    scanf("%d",&n);
    int a[n];
    int b[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    
    for(int i=0;i<n;i++){
        int lsum = 0, rsum = 0;
        for(int j =i+1;j<n;j++){
            rsum += a[j];
        }
        for(int k=0;k<i;k++){
            lsum += a[k];
        }
        b[i] = abs(lsum-rsum);
        printf("%d ",b[i]);
    }
    return 0;
}
