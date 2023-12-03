/*
Implement Insertion Sort and print the index at which the ith element gets inserted [i>=1].

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines. First line of each test case contains N - size of the array. The next line contains N integers - elements of the array.

Constraints

1 <= T <= 100
2 <= N <= 100
-1000 <= ar[i] <= 1000

Output Format

For each test case, print the index at which the ith element gets inserted [i>=1], separated by space. Separate the output of different tests by newline.

Sample Input 0

4
8
176 -272 -272 -45 269 -327 -945 176 
2
-274 161
7
274 204 -161 481 -606 -767 -351
2
154 -109
Sample Output 0

0 1 2 4 0 0 6 
1 
0 0 3 0 0 2 
0 
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> insertionsort(vector<int>&arr){
    vector<int>ind;
    int n=arr.size();
    for(int i=1;i<n;i++){
        int k=arr[i];
        int j=i-1;
        while(j>=0 && k<arr[j]){
            arr[j+1]=arr[j];
            j-=1;
        }
        arr[j+1]=k;
        ind.push_back(j+1);
    }
    return ind;
}

int main() {
      
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        vector<int>elements(n);
        for(int j=0;j<n;j++){
            cin>>elements[j];
        }
        vector<int>ind=insertionsort(elements);
        for(int idx:ind){
            cout<<idx<<' ';
            
        }
        cout<<endl;
    }
    return 0;
}
