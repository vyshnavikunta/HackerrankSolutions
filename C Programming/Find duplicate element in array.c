/*
Find a duplicate element in the given array of integers. There will be only a single duplicate element in the array.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains size of the array - N and second line contains the elements of the array.

Constraints

2 <= N <= 100
0 <= ar[i] <= 109

Output Format

Print the duplicate element from the given array.

Sample Input 0

6
5 4 10 9 21 10
Sample Output 0

10
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,N,a[100];
    scanf("%d",&N);
    for(i=0;i<98;i++)
        scanf("%d",&a[i]);
    for(i=0;i<N;i++)
    {   for(j=0;j<i;j++)
        { if((a[i]==a[j])&& i!=j)
            printf("%d ",a[i]);}}
      
    return 0;
}
