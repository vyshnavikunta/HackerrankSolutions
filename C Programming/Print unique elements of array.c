/*
Print unique elements of the array in the same order as they appear in the input.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains a single integer N - the size of array and second line contains array elements.

Constraints

1 <= N <= 100
0 <= ar[i] <= 109

Output Format

Print unique elements of the array.

Sample Input 0

7
5 4 10 9 21 4 10
Sample Output 0

5 9 21
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i,j,N,ar[100];
    scanf("%d",&N);
    for(i=0;i<N;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<N;i++)
    {   for(j=0;j<N;j++)
    {       if((ar[i]==ar[j])&& (i!=j))
                break;}
             if(j==N)
                printf("%d ",ar[i]);}
     
    return 0;
}
