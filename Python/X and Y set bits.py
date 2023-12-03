'''
Given two numbers X and Y, find the number whose binary representation has its Xth and Yth bits set to 1 and remaining bits set to 0.

Input Format

First line of input contains T - number of test cases. Its followed by T lines. Each subsequent line contains two integers: X - the index of the first set bit and Y - the index of the second set bit, separated by a space.

Constraints

10 points
1 <= T <= 100
0 <= X, Y <= 30

40 points
1 <= T <= 105
0 <= X, Y <= 105

Output Format

For each test case, print the number whose binary representation has its Xth and Yth bits set to 1 and remaining bits set to zero, separated by a newline.
Since this number can be very large, print the result % 1000000007.

Sample Input 0

3
4 3
5 0
15 30
Sample Output 0

24
33
73774585
'''
t=int(input())
for _ in range(t):
    x,y=map(int,input().split())
    r=(1<<x)|(1<<y)
    print(r%1000000007)
