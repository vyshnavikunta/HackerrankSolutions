'''
Given a string, print count of vowels and consonants in the string.

Input Format

Input contains a string S, consisting of lowercase and uppercase characters.

Constraints

1 <= len(S) <= 100

Output Format

Print count of vowels and consonants in the given string, separated by space.

Sample Input 0

aBxbbiAasPw
Sample Output 0

4 7
'''
s = str(input())
v = ['a','e','i','o','u','A','E','I','O','U']
vcnt = 0
ccnt = 0
for i in s:
    if i in v:
        vcnt += 1
    else:
        ccnt += 1
print(vcnt,ccnt)
