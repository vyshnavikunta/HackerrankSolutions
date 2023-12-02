'''
Given a string, check if it contains only digits.

Input Format

Input contains a string S, consisting of ascii characters.

Constraints

1 <= len(S) <= 100

Output Format

Print "Yes" if string contains only digits, "No" otherwise.

Sample Input 0

123456786543
Sample Output 0

Yes
'''
s = str(input())
dgts = ['0','1','2','3','4','5','6','7','8','9']
cnt = 0
for i in s:
    if i not in dgts:
        cnt += 1
if cnt != 0:
    print("No")
else:
    print("Yes")
