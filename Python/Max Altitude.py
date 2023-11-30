'''
Imagine a pilot starting the flight from the ground and flying over a series of different points at different heights. You are given an array, where A[i] represents heights.
Currently, if pilot is at altitude X at ith point, and if he wants to reach (i+1)th point, his altitude will become X+A[i].
The pilot starts at altitude 0 and wants to find the highest point he can reach during the entire journey. Your task is to print the highest altitude the pilot reaches.

Input Format

First line of input contains an integer N. Second line of input contains N space separated integers.

Constraints

1 <= N <= 1000
-1000 <= A[i] <= 1000

Output Format

Print the highest altitude the pilot can reach.

Sample Input 0

5
-5 1 5 0 -7
Sample Output 0

1
'''
n = int(input())
ar = list(map(int,input().split()))
cnt=0
ans = cnt
for i in range(0,n):
    cnt += ar[i]
    if cnt>ans:
        ans = cnt
print(ans)
