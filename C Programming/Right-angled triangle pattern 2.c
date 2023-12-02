/*
Print right-angled triangle pattern. See example for more details.

Input Format

First line of input contains a single integer N - the size of the triangle.

Constraints

1 <= N <= 50

Output Format

For the given integer, print the right-angled triangle pattern.

Sample Input 0

5
Sample Output 0

1
2 6
3 7 10
4 8 11 13
5 9 12 14 15
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {  
    int N;
    scanf("%d",&N);
    
    for(int i=1;i<=N;i++){
    int k = i;
    int x = N-1;    
        for(int j=1;j<i+1;j++){
           printf("%d ",k);
            k = k+x;
            x = x-1;
        }
        printf("\n");  
        }
    return 0;
}
