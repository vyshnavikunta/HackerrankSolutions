'''
Given a number, reverse the bits in the binary representation (consider 32-bit unsigned data) of the number, and print the new number formed.

Input Format

First line of input contains T - number of test cases. Each of the next T lines contains a number integer N.

Constraints

1 <= T <= 100000
0 <= N <= 109

Output Format

For each test case, print the new number formed after reversing the bits, separated by new line.

Sample Input

4
4
15
6
1000000000

Sample Output

536870912
4026531840
1610612736
5462492
'''
t = int(input())
for i in range(t):
    n = int(input())
    rev_num = 0
    b = 32
    for _ in range(b):
        rev_num = (rev_num << 1) | (n&1)
        n >>= 1
    print(rev_num)
