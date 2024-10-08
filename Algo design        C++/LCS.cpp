/*
<<< Memorization Method  >>>

Step:1
- LCS(i,j) -> Length of longest common subsequence between strings s[i..n] and t[j..m]

step:2
-recurrance solutation : LCS(i,j) = 1 + LCS(i+1, j+1) if s[i] == t[j]
            else max{LCS(i+1, j), LCS(i, j+1)}
step:3
- base case: LCS(i,m) = 0
             LCS(n,j) = 0

Input:
axyb
abyxb

Output:
3

Input :
ayc
aby
output :
2


Input :
aaaa
aaaa
output :
4

*/
#include <bits/stdc++.h>
using namespace std;
const int N = 3003;

int dp[N][N];
int n, m;
string s, t;

int LCS(int i, int j)
{
             // 1. base case
             if (i == n || j == m)
             {
                          return 0;
             }

             // 2. if result is already calculated return it
             if (dp[i][j] != -1)
             {
                          return dp[i][j];
             }

             // 3. calculate answer from smaller sub problems
             if (s[i] == t[j])
             {
                          int ans = 1 + LCS(i + 1, j + 1);
                          dp[i][j] = ans;
                          return ans;
             }

             int ans = max(LCS(i + 1, j), LCS(i, j + 1));
             dp[i][j] = ans;
             return ans;
}
int main()
{
             cin >> s >> t;

             n = s.size();
             m = t.size();

             for (int i = 0; i <= n; i++)
             {
                          for (int j = 0; j <= m; j++)
                          {
                                       dp[i][j] = -1;
                          }
             }

             cout << LCS(0, 0) << endl;
             return 0;
}
