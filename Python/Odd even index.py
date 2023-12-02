'''
Given a string, print all the letters present at odd index, followed by the letters present at even index.

Input Format

Input contains a string S, consisting of ascii characters.

Constraints

1 <= len(S) <= 100

Output Format

Print letters present at odd index, followed by the letters present at even index.

Sample Input 0

afdg5tg
Sample Output 0

fgtad5g
'''
s = str(input())
res1 = s[1::2]
res2 = s[::2]
print(res1,res2,sep = "")
