/*
In a given integer N, check whether the ith bit is set or not.

Input Format

First and only line of input contains N and i.

Constraints

0 <= N <= 109
0 <= i <= 30

Output Format

Print "true" if ith bit is set in the given integer N, "false" otherwise.

Sample Input 0

10 1
Sample Output 0

true
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,i;
    scanf("%d %d",&n,&i);
    
    if(n&(1<<i))
        printf("true");
    else    
        printf("false");
    
    return 0;
}
