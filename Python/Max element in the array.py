''' Find maximum element from the given array of integers.
Input Format
First line of input contains N - the size of the array and second line contains the elements of the array.
Constraints
1 <= N <= 100
-109 <= ar[i] <= 109
Output Format
Print the maximum element of the given array.
Sample Input 0
5
-2 -19 8 15 4
Sample Output 0
15
'''
n = int(input())
arr = list(map(int,input().split()))
max1 = arr[0]
for i in range(1,n):
    max1 = max(max1, arr[i])
print(max1)
