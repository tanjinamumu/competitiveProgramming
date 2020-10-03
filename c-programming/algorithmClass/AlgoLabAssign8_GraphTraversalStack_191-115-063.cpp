//ID:191-115-063

#include<bits/stdc++.h>
using namespace std;
vector<int> adjlist[100002]; //let maximum size of the node in Graph be 10^5 + 1
bool vis[100002];

int main()
{
    int n,e;
    cin>>n>>e; //No. of nodes and edges
    for(int i = 0; i < n; i++)
    {
        vis[i + 1] = false;
    }
    //creating graph in this loop.
    for(int i = 0; i < e; i++)
    {
        int u, v;
        cin>>u>>v; //u and v are denoting the bi-directional edges
        //Adjacency List
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    int v;
    cin >> v; //source node to start DFS
    stack<int> s;
    s.push(v);
    while(!s.empty())
    {
        int vertex = s.top();
        vis[vertex] = true;
        s.pop();
        cout<<vertex<<" ";
        for(int i=0; i<adjlist[vertex].size(); i++)
        {
            int node=adjlist[vertex][i];
            if(vis[node]!=true)
            {
                s.push(node);
                vis[node]=true;
            }
        }
    }
    return 0;
}




