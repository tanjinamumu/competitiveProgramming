//ID:191-115-063

#include <bits/stdc++.h>
using namespace std;
vector<int> adjlist[100002]; //let maximum size of the node in Graph be 10^5 + 1
bool vis[100005];

void DFSre(int vertex)
{
    cout<<vertex<<" ";
    vis[vertex]=1;
    int i;
    for(i=0; i<adjlist[vertex].size(); i++)
    {
        if(vis[adjlist[vertex][i]]==0)
        {
            DFSre(adjlist[vertex][i]); //recursion call.
        }
    }
}
int main()
{
    int n,e,i,u,v;
    cin>>n>>e; //No. of nodes and edges
    for(i=0; i<e; i++)
    {
        cin>>u>>v;
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    for(i=0; i<100005; i++)
    {
        vis[i]=0;
    }
    int s;
    cin>>s;//source node to start DFS
    DFSre(s);
    return 0;
}
