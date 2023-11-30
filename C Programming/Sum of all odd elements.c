/*
Print sum of all odd elements in an array.
Input Format
First line of input contains N - the size of the array and second line contains array elements.
Constraints
1 <= N <= 100
-109 <= ar[i] <= 109
Output Format
Print sum of all odd elements of the given array.
Sample Input 0
5
6 9 8 4 3
Sample Output 0
12
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int arr[n], sum=0;
    for(int i =0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%2 != 0){
            sum += arr[i];
        }
    }
    
    printf("%d",sum);
       
    return 0;
}
