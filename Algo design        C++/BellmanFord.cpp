/*
 // Pseudocode : Bellman-Ford

 Input -> A weighted graph & src node (with no negetvive cycle but it can have -ve edge  )
 Output -> shortest distance from src node to all other nodes

Time Complexity -> O(n*m)
Space Complexity -> O(n)


// Condition
  u------>v
 d[u]+c(u,v)<d[v]
 => d[v]=d[u]+c(u,v)

 - create a distanc array "d" wtih all values to Infinity
 - d[src]=0

 // Relexation part
 -for i =1 to n-1:  ( where n is the number of node of the graph)
    - for all edge e(u, v , w):
       -if d[u] + w <d[v] :
          d[v] =d[u] +w

-print the distanc earray "d"

 */

#include <bits/stdc++.h>
using namespace std;
const int N = 1e5 + 5;
const int INF = 1e9;
vector<pair<int, int>> adj_list[N];
int d[N];

int main()
{
   // n number of node and m number of edge
   int n, m;
   cin >> n >> m;

   for (int i = 1; i <= n; i++)
   {
      d[i] = INF;
   }

   for (int i = 0; i < m; i++)
   {
      int u, v, w;
      cin >> u >> v >> w;
      adj_list[u].push_back({v, w});
   }

   int src = 1;
   d[src] = 0;

   for (int i = 1; i <= n - 1; i++)
   {
      for (int node = 1; node <= n; node++)
      {
         for (pair<int, int> adj_node : adj_list[node])
         {
            int u = node;
            int v = adj_node.first;
            int w = adj_node.second;

            if (d[u] + w < d[v])
            {
               d[v] = d[u] + w;
            }
         }
      }
   }

   for (int i = 1; i <= n; i++)
   {
      cout << d[i] << " ";
   }
   cout << endl;
}