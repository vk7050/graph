//find shortest_distance in undirected graph using bfs
#include<bits/stdc++.h>
using namespace std;
Class Solution
{
  public:
  void Shortest_path(vector<int> adj[],int V,int src)
  {
    int vstd[V]={0};
    vstd[s]=1;
    queue<int> q;
    q.push(src);
    int dst[V];
    for(int a=0;a<V;a++)
     dst[a]=INT_MAX;
     dst[src]=0;
     while(!q.empty())
     {
       int vrtx=q.front();
       q.pop();
       for(int a:adj[vrtx])
       {
         if(vstd[a]==0)
         {
           vstd[a]=1;
           q.push(a);
           dst[a]=dst[vrtx]+1;
         }
       }
      }
  }
  
  
};


int main()
{
  int V,E,src;
  cin>>V>>E;
  cin>>src;
  vector<int> adj[V]
  for(int a=0;a<E;a++)
  {
    int u,v;
    cin>>u>>v;
    adj[u].push_back(v);
    adj[v].push_back(u);
  }
  
  Solution Ans;
  Ans.Shortest_path(adj,V,src);
  return 0;
}
  
