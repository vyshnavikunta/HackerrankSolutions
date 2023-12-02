/*
Given an integer N, check whether it's an Armstrong number or not.
Note: Armstrong number is a number that is equal to the sum of cubes of its digits.

Input Format

First and only line of input contains a integer - N.

Constraints

0 <= N <= 109

Output Format

Print "Yes" if the number is an Armstrong number, "No" otherwise.

Sample Input 0

153
Sample Output 0

Yes
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

       
    long long num,n,r=0,c=0,sum=0;
    scanf("%lld",&num);
    n=num;
    while(n!=0)
    {
        r=n%10;
        c=r*r*r;
        sum=sum+c;
        n=n/10;
    }
    if(sum==num)
    {
        printf("Yes");        
    }
    else
        printf("No");   
return 0;
}
