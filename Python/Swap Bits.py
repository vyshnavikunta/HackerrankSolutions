'''
Given a number, swap the adjacent bits in the binary representation of the number, and print the new number formed after swapping.

Input Format

First line of input contains T - number of test cases. Each of the next T lines contains a number N.

Constraints

1 <= T <= 100000
0 <= N <= 109

Output Format

For each test case, print the new integer formed after swapping adjacent bits, separated by new line.

Sample Input

4
10
7
43
100

Sample Output

5
11
23
152
'''
def swapadj(n):
    bs=bin(n)[2:]
    if len(bs)%2 !=0:
        bs='0'+bs
    sb=''.join([bs[i+1]+bs[i] for i in range(0,len(bs),2)])
    sn=int(sb,2)
    return sn

t=int(input())
for _ in range(t):
    n=int(input())
    r=swapadj(n)
    print(r)
