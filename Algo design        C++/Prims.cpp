// Prims using Custom datatype with comparator ...
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 6;
vector<pair<int, int>> adj_list[N];
vector<pair<int, int>> mstEdges;
int visited[N], nodes, edges, u, v, w, source, cost = 0;
class CostNodes
{
public:
     int w, p, c;
     CostNodes(int w, int p, int c)
     {
          this->w = w;
          this->p = p;
          this->c = c;
     }
     bool operator<(const CostNodes &other) const
     {
          if (w != other.w)
               return w < other.w;
          if (p != other.p)
               return p < other.p;
          return c < other.c;
     }
};
set<CostNodes> mySet;
void primsMST(int src)
{
     visited[src] = 1;
     for (auto adj_entry : adj_list[src])
     {
          int edge_cost = adj_entry.second;
          int adj_node = adj_entry.first;
          if (!visited[adj_node])
          {
               mySet.insert({edge_cost, src, adj_node});
          }
     }
     while (!mySet.empty())
     {
          auto myIt = *mySet.begin();
          mySet.erase(mySet.begin());
          int myParent = myIt.p;
          int myChild = myIt.c;
          int weight = myIt.w;
          if (!visited[myChild])
          {
               cost += weight;
               // mstEdges.push_back({myParent, myChild});
               cout << myParent << "-" << myChild << " -> " << weight << "\n";
               primsMST(myChild);
          }
     }
}
int main()
{
     ios_base::sync_with_stdio(0);
     cin.tie(0);
     cout.tie(0);
     int t = 1;
     // cin>>t;
     while (t--)
     {
          cin >> nodes >> edges;
          while (edges--)
          {
               cin >> u >> v >> w;
               adj_list[u].push_back({v, w});
               adj_list[v].push_back({u, w});
          }
          cin >> source;
          cout << "\nThe path connection with cost (node-node -> cost) is- "
               << "\n";
          primsMST(source);
          cout << "MST (Prim's) Cost : " << cost << "\n";
     }
     return 0;
}

/*

------Input------

5 7
1 3 5
2 3 3
2 7 2
3 5 20
1 4 10
4 2 3
1 5 6
1


------Input------
5 7
1 2 5
2 3 3
2 5 2
3 5 20
1 4 100
4 5 3
1 5 6
1

 */
