'''
Print hollow half inverted pyramid pattern using '*'. See example for more details.

Input Format

First and only line of input contains a single integer N - the size of the pyramid.

Constraints

1 <= N <= 50

Output Format

For the given integer, print hollow half inverted pyramid pattern.

Sample Input 0

5
Sample Output 0

* * * * *
*     *
*   *
* *
*
'''
n = int(input())
for i in range(n,0,-1):
    for j in range(i):
        if i == n:
            print('* ',end='')
        else:
            if j == 0 or j == i-1:
                print('* ' , end = '')
            else:
                print('  ',end = '')
    print()
