/*
Given the length of 3 sides of a triangle, check whether the triangle is valid or not.

Input Format

First and only line of input contains three integers A, B, C - length of sides of the triangle.

Constraints

1 <= A, B, C <= 109

Output Format

Print "Yes" if you can construct a triangle with the given three sides, "No" otherwise.

Sample Input 0

4 3 5
Sample Output 0

Yes
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long int a,b,c;
    scanf("%ld %ld %ld",&a,&b,&c);
    if(((a+b)>c) &&((b+c)>a)&&((a+c)>b))
        printf("Yes");
    else
        printf("No");
    
    return 0;
}
