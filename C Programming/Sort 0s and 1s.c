/*
You are given an array of 0's and 1's. Sort the array in ascending order and print it.
Note: Solve using two-pointer technique.

Input Format

First line of input contains T - the number of test cases. Its followed by 2T lines, the first line contains N - the size of the array.
The second line contains the elements of the array.

Constraints

1 <= T <= 1000
1 <= N <= 1000
0 <= A[i] <= 1

Output Format

For each test case, sort the array in ascending order and print it on a new line.

Sample Input 0

2
5
0 1 1 0 1
6
1 1 1 1 1 0
Sample Output 0

0 0 1 1 1
0 1 1 1 1 1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void sortarr(int arr[],int n){
    int p1=0,p2=n-1;
    while(p1<p2){
        if(arr[p1]==1&&arr[p2]==0){
            arr[p1++]=0;
            arr[p2--]=1;
        }
        else if(arr[p1]==0){
            p1++;
        }
        else if(arr[p2]==1){
            p2--;
        }
    }
}

int main() {
    
    int t,n,arr[1001];
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        scanf("%d",&n);
        
        for(int j=0;j<n;j++){
            scanf("%d",&arr[j]);
        }
    
    sortarr(arr,n);
    for(int j=0;j<n;j++){
            printf("%d ",arr[j]);
        }
    printf("\n");
    }
    return 0;
}
