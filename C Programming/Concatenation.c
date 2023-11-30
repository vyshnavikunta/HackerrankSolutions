/*Given an integer array A of size N. You have to construct a new B array with a length of (N+N). For each index i from 0 to N-1, the value of B[i] should be same as the value of A[i], and the value of B[i+N] should also be same as value of A[i].
In simple terms, you have to duplicate the A array and place them consecutively in the B array two times.
Input Format
First line of input contains N - size of the array A. The next line contains N integers of array A.
Constraints
1 <= N <= 1000
1 <= A[i] <= 1000
Output Format
Print the elements of the B array separated by space.
Sample Input 0
3
6 7 7 
Sample Output 0
6 7 7 6 7 7 
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    scanf("%d",&n);
    int a[n];
    
    int b[2*n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        
        b[i] = a[i];
        b[i+n] = a[i];}
  
    for(int i=0;i<2*n;i++){
        printf("%d ",b[i]);
    }
    return 0;
}
