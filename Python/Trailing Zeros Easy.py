'''
Count the number of trailing 0s in factorial of a given number.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each containing an integer N.

Constraints

1 <= T <= 10000
1 <= N <= 1015

Output Format

For each test case, print the number of trailing 0s in N!, separated by new line.

Sample Input 0

3
2
5
20
Sample Output 0

0
1
4
'''
def countzero(n):
    cnt=0
    while n>=5:
        cnt += n//5
        n//=5
    return cnt
t=int(input())
for _ in range(t):
    n= int(input())
    r=countzero(n)
    print(r)
