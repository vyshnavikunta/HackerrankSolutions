'''
Print hollow diamond pattern using '*'. See examples for more details.

Input Format

First line of input contains T - number of test cases. Its followed by T lines, each line contains a single odd integer N - the size of the diamond.

Constraints

1 <= T <= 100
3 <= N <= 201

Output Format

For each test case, print the test case number as shown, followed by the diamond pattern, separated by newline.

Sample Input 0

4
3
7
5
15
Sample Output 0

Case #1:
 *
* *
 *
Case #2:
   *
  * *
 *   *
*     *
 *   *
  * *
   *
Case #3:
  *
 * *
*   *
 * *
  *
Case #4:
       *
      * *
     *   *
    *     *
   *       *
  *         *
 *           *
*             *
 *           *
  *         *
   *       *
    *     *
     *   *
      * *
       *
'''
def print_hollow_diamond(N):
    for i in range(N):
        for j in range(N):
            if i + j == N // 2 or i - j == N // 2 or j - i == N // 2 or i + j == (3 * N // 2) - 1:
                print("*", end="")
            else:
                print(" ", end="")
        print()

def main():
    T = int(input())
    for case in range(1, T + 1):
        N = int(input())
        print("Case #{}:".format(case))
        print_hollow_diamond(N)

if __name__ == "__main__":
    main()
