'''
Given a number N, find the number of bits that are set to 1 in its binary representation.

Input Format

First line of input contains T - the number of test cases. It is followed by T lines, each line contains a single integer N.

Constraints

1 <= T <= 104
0 <= N <= 1018

Output Format

For each test case, print the number of bits set to 1 in the binary representation of N, separated by a new line.

Sample Input 0

3
4
15
10
Sample Output 0

1
4
2
'''
def cntsetbits(n):
    cnt=0
    while n>0:
        cnt += n%2
        n //= 2
    return cnt

t= int(input())
for _ in range(t):
    n=int(input())
    r=cntsetbits(n)
    print(r)
