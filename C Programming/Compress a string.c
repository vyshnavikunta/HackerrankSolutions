/*
Given a string, compress the given string. See example for more details.

Input Format

Input contains a string S, consisting of lowercase and uppercase characters.

Constraints

1 <= len(S) <= 100

Output Format

Print the compressed string.

Sample Input 0

aaaBBBBhhhekkL
Sample Output 0

a3B4h3e1k2L1
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

        
    char s[101];
    scanf("%s",s);
    int l = strlen(s);
    int i=0,j=1;
    int cnt =1;
    while(j<=l){
        if(s[i]==s[j]){
         cnt ++; 
         j++;
        }
        else{
            printf("%c%d",s[i],cnt);
            i=j;
            j=i+1;
            cnt = 1;
        }
    }
    return 0;
}
