/*
// pseudoce : Floyed-Warshall

Time Complexity -> O(v^3)
Space cpmplexity -> O(V^2)


Input -> A wighted grpagh as an adjacency Matrx
Output -> All pair shortest distance

-Create a distanc_matrix "d" where d[i][j]=x where there is a direct edges frim "i" to Node "j" and the cost is "x"

-for all node "i" d[i][i]=0
- for all nodes "i" & "j" where there is not any direct edges from "i" to "j"
    d[i][j]=INF


- for all node "k"
   -for all node "u"
      - fro all node "v"
        - d[u][v]=min(d[u][v], d[u][k] + d[k][v])

-Output All pair shortest distance "d"

 */

#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 3;
const int INF = 1e9;
int d[N][N];
int main()
{
  // n number of nodes and m = nummber of edge
  int n, m;
  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      d[i][j] = INF;
    }
  }

  for (int i = 0; i < m; i++)
  {
    int u, v, w;
    cin >> u >> v >> w;
    d[u][v] = w;
  }

  for (int i = 1; i <= n; i++)
  {
    d[i][i] = 0;
  }

  for (int k = 1; k <= n; k++)
  {
    for (int u = 1; u <= n; u++)
    {
      for (int v = 1; v <= n; v++)
      {
        d[u][v] = min(d[u][v], d[u][k] + d[k][v]);
      }
    }
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cout << d[i][j] << " ";
    }
    cout << endl;
    return 0;
  }
}