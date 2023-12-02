'''
Given a string, check if it contains only vowels.

Input Format

Input contains a string S, consisting of lowercase and uppercase characters.

Constraints

1 <= len(S) <= 100

Output Format

Print "Yes" if string contains only vowels, "No" Otherwise.

Sample Input 0

SmartInterviews
Sample Output 0

No
'''
s = str(input())
v = ['A','E','I','O','U','a','e','i','o','u']
cnt = 0
for i in s:
    if i not in v:
        cnt += 1
if cnt == 0:
    print("Yes")
else:
    print("No")
