/*
Given an array of elements containing 0's and 1's. You have to find the length of longest contiguous 1's.

Input Format

First line of input contains N - size of the array. The next line contains the N integers of array A.

Constraints

1 <= N <= 1000

Output Format

Print the length of longest contiguous 1's.

Sample Input 0

10
1 0 0 1 0 1 1 1 1 0 
Sample Output 0

4
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

  
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int cnt = 0, val = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 1){
            cnt ++;
            if(cnt > val){
                val = cnt;
            }
        }
        else{
            cnt = 0;
        }
    }
    printf("%d",val);
    return 0;
}
