'''
Given a positive integer - N, print the number of multiples of 3, 5 between [1, N].

Input Format

First and only line of input contains a positive integer - N.

Constraints

1 <= N <=1018

Output Format

Print the number of multiples of 3, 5 in range of 1 to N.

Sample Input 0

12
Sample Output 0

6
'''
n = int(input())
n1 = n//3
n2 = n//5
n3 = n//15
print(n1+n2-n3)
