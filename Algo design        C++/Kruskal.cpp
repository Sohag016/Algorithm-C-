// Kruskal using DSU ...
#include <bits/stdc++.h>
using namespace std;
const int N = 1e6 + 6;
int parent[N], parentLevel[N];
class Edges
{
public:
     int u, v, w;
     Edges(int u, int v, int w)
     {
          this->u = u;
          this->v = v;
          this->w = w;
     }
};
void dsu_set(int n)
{
     for (int i = 0; i <= n; i++)
     {
          parent[i] = -1;
          parentLevel[i] = 0;
     }
}
int dsu_find(int n)
{
     if (parent[n] == -1)
          return n;
     int leader = dsu_find(parent[n]);
     parent[n] = leader;
     return leader;
}
void dsu_union_by_rank(int a, int b)
{
     int leader_a = dsu_find(a);
     int leader_b = dsu_find(b);
     if (leader_a != leader_b)
     {
          if (parentLevel[leader_a] > parentLevel[leader_b])
          {
               parent[leader_b] = leader_a;
          }
          else if (parentLevel[leader_b] > parentLevel[leader_a])
          {
               parent[leader_a] = leader_b;
          }
          else
          {
               parent[leader_a] = leader_b;
               parentLevel[leader_b]++;
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
          int node, edge, u, v, w, cost = 0;
          cin >> node >> edge;
          dsu_set(node);
          vector<Edges> edgeList;
          while (edge--)
          {
               cin >> u >> v >> w;
               Edges eg(u, v, w);
               edgeList.push_back(eg);
          }
          sort(edgeList.begin(), edgeList.end(), [](const Edges &a, const Edges &b)
               { return a.w < b.w; });
          cout << "\nThe path connection with cost (node-node -> cost) is- "
               << "\n";
          for (auto ed : edgeList)
          {
               int leader_u = dsu_find(ed.u);
               int leader_v = dsu_find(ed.v);
               if (leader_u != leader_v)
               {
                    cout << ed.u << "-" << ed.v << " -> " << ed.w << "\n";
                    dsu_union_by_rank(ed.u, ed.v);
                    cost += ed.w;
               }
          }
          cout << "MST (Kruskal) Cost : " << cost << "\n";
     }
     return 0;
}

/*

------Input------
5 5
1 2 5
2 3 3
2 3 2
3 3 20
1 4 10
4 5 3
1 5 6

 */
