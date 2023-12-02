'''
Given a string, toggle the case of each character in the given string.

Input Format

Input contains a string S, consisting of lowercase and uppercase characters.

Constraints

1 <= len(S) <= 100

Output Format

Print the toggled string.

Sample Input 0

abdBd
Sample Output 0

ABDbD
'''
s = str(input())
res = s.swapcase()
print(res)
