'''
Given a non-negative integer - N, print the sum of digits of the given number.

Input Format

First and only line of input contains a non-negative integer N.

Constraints

1 <= length(N) <= 103

Output Format

Print the sum of digits of the given number.

Sample Input 0

164
Sample Output 0

11
'''
n = int(input())
def sum(n):
    sum = 0
    for i in str(n):
        sum += int(i)
    return sum
print(sum(n))
