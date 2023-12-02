'''
Given a sentence S and a character ch, count occurrence of the given character in the sentence

Input Format

First line of input contains a sentence - S and second line of input contains a single lowercase character - ch.

Constraints

1 <= len(S) <= 100

Output Format

Print count of the given character in the sentence.

Sample Input 0

Data Structures & Algorithms
s
Sample Output 0

2
'''
s = str(input())
ch = str(input())
cnt = 0
for i in s:
    if i == str(ch):
        cnt += 1
        
print(str(cnt))
