/*
You are given an array of integers. For each element in the array, find the number of smaller elements on the right side and print the total count.

Input Format

First line of input contains T - number of test cases. Its followed by 2T lines, the first line contains N - the size of the array. The second line contains the elements of the array.

Constraints

30 points
1 <= N <= 1000

70 points
1 <= N <= 100000

General Constraints
1 <= T <= 100
-10000 <= A[i] <= 10000

Output Format

For each test case, print the sum of count of smaller elements on right side of each element in the array, separated by new line.

Sample Input 0

2
5
5 10 54 11 8 
6
15 35 25 7 15 12 
Sample Output 0

4
10
*/
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void mer(int arr[], int l, int h, int mid, long long& c) {
    int p1 = l, p2 = mid + 1, k = 0;
    int temp[h - l + 1];
    while (p1 <= mid && p2 <= h) {
        if (arr[p1] > arr[p2]) {
            c += (mid - p1 + 1);
            temp[k++] = arr[p2++];
        } else {
            temp[k++] = arr[p1++];
        }
    }
    while (p1 <= mid) {
        temp[k++] = arr[p1++];
    }
    while (p2 <= h) {
        temp[k++] = arr[p2++];
    }
    for (int i = 0; i < (h - l + 1); i++) {
        arr[i + l] = temp[i];
    }
}

void mergeSort(int arr[], int l, int h, long long& c) {
    if (l < h) {
        int mid = l + (h - l) / 2;
        mergeSort(arr, l, mid, c);
        mergeSort(arr, mid + 1, h, c);
        mer(arr, l, h, mid, c);
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long cnt = 0; 
        mergeSort(arr, 0, n - 1, cnt);
        cout << cnt << endl;
    }
    return 0;
}
