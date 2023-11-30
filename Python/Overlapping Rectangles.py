'''
Given 2 rectangles parallel to coordinate axes, find the area covered by them.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains 4 integers - xbl, ybl, xtr, ytr - the bottom-left and top-right coordinates of rectangle-1. The second line of each test case contains 4 integers - xbl, ybl, xtr, ytr - the bottom-left and top-right coordinates of rectangle-2.

Constraints

1 <= T <= 10000
-106 < x,y <= 106
(xbl, ybl) < (xtr, ytr)

Output Format

For each test case, print the area covered by the 2 rectangles, separated by newline.

Sample Input 0

4
2 5 4 6
1 2 5 4
-4 -3 -2 5
-3 -5 1 3
1 0 3 5
2 3 5 8
-2 2 4 4
-3 1 5 5
Sample Output 0

10
42
23
32
'''
t=int(input())
while(t):
    r1=list(map(int,input().split()))
    r2=list(map(int,input().split()))
    a1=abs(r1[2]-r1[0])*abs(r1[3]-r1[1])
    a2=abs(r2[2]-r2[0])*abs(r2[3]-r2[1])
    ox=max(0,min(r1[2],r2[2])-max(r1[0],r2[0]))
    oy=max(0,min(r1[3],r2[3])-max(r1[1],r2[1]))
    ans=ox*oy
    print(a1+a2-ans)
    t-=1
