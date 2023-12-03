'''
Given two numbers X and Y, find the number whose binary representation has X 1's followed by Y 0's.

Input Format

First line of input contains T - number of test cases. Its followed by T lines. Each subsequent line contains two integers separated by a space: X - the number of the 1's and Y - the number of 0's which follows the X 1's in the binary representation of the number.

Constraints

10 points
1 <= T <= 100
0 <= X, Y <= 15

40 points
1 <= T <= 105
0 <= X, Y <= 105

Output Format

For each test case, print the number whose binary representation has X 1's and Y 0's, separated by a new line.
Since this number can be very large, print the result % 1000000007.

Sample Input 0

3
4 3
2 5
10 15
Sample Output 0

120
96
33521664

'''
t=int(input())
for _ in range(t):
    x,y=map(int,input().split())
    r=((1<<x)-1)<<y
    print(r%1000000007)
