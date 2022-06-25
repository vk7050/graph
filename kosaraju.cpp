#include<bits/stdc++.h>
using namespace std;

void dfs_time(int vstd[],int a,vector<int> adj[],stack<int> s)
{
  if(vstd[a]==0)
  {
    vstd[a]=1;
    cout<<a<<" ";
    for(int vrtx:adj[a])
    {
      dfs_time(vstd,vrtx,adj,s);
    }
    s.push(a);
  }
}

int main()
{
  int n_v,n_e;
  cin>>n_v>>n_e;
  vector<int> adj[n_v];
   for(int a=0;a<n_e;a++)
  {
      int u,v;
      cin>>u>>v;
      adj[u].push_back(v);
  }
  stack<int> s;
  int vstd[n_v];
  for(int a=0;a<n_v;a++)
  {
    if(vstd[a]==0)  
    {
      dfs_time(vstd,a,adj,s);
    }
  }
  while(!s.empty())
  {
    int vrtx=s.top();
    s.pop();
    cout<<vrtx<<" ";
  }
  return 0;
}
