'''
Given a positive integer, print its binary representation.
Note: Do not use any inbuilt functions/libraries for your main logic.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line containing a single integer.

Constraints

1 <= T <= 10000
0 <= N <= 109

Output Format

For each test case, print binary representation, separated by new line.

Sample Input 0

5
10
15
7
1
120
Sample Output 0

1010
1111
111
1
1111000
'''
def solve(n):
    
    ans=""
    if n==0:
        return "0"
    while n>0:
        r=n%2
        ans=str(r)+ans
        n//=2
    return ans
        

t=int(input())
for _ in range(t):
    n=int(input())
    res=solve(n)
    print(res)
    
    
