#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n_v,n_e,s;
  cin>>n_v>>n_e;
  cin>>s;
  vector<pair<int,int>> adj[V];
   for(int a=0;a<n_e;a++)
  {
      int u,v,w;
      cin>>u>>v>>w;
      adj[u].push_back({v,w});
  }
  
  
  
