/*
Given a 2D matrix of size NxN, print the sum of the elements of all its diagonals.

Input Format

First line of input contains T - number of test cases. First line of each test case contains N - size of the matrix. Each of the next N lines contains N integers - the elements of the matrix.

Constraints

1 <= T <= 100
1 <= N <= 100
-100 <= ar[i][j] <= 100

Output Format

For each test case, print the sum of the elements of all the diagonals, separated by newline. Refer samples for more clarity.

Sample Input 0

4
3
-5 0 4 
2 8 -6 
3 7 1 
1
-4 
2
5 -2 
-4 1 
6
-2 -3 -6 -5 50 3 
8 7 10 -5 -3 30 
6 3 70 9 -20 -7 
-9 9 -6 7 3 2 
-1 7 7 6 -4 3 
8 5 6 -9 40 8 
Sample Output 0

4 -6 4 9 3 
-4 
-2 6 -4 
3 80 -15 -29 22 86 51 13 4 4 8 
  */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
        cin>>a[i][j];
    }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
        if(j!=n/2){
        int temp=a[i][j];
        a[i][j]=a[i][n-j-1];
        a[i][n-j-1]=temp;
        }
        }
    }
    
      for(int k=0;k<=n-1;k++){
         int i=k;
         int j=0;
         int sum=0;
         while(i>=0){
         sum+=a[i][j];
        i=i-1;
        j=j+1;
        }
        cout<<sum<<" ";
     }
    for(int k=1;k<=n-1;k++){
        int i=n-1;
        int j=k;
         int s=0;
         while(j<n){
            s+=a[i][j];
            i=i-1;
             j=j+1;
        }
        cout<<s<<" ";
    }
    cout<<endl;
}
         
    return 0;
 }
