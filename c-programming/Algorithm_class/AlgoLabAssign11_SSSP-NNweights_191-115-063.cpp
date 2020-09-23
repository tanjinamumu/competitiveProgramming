#include<bits/stdc++.h>
using namespace std;

int parent[1000];

void sssp_dijkstra(int src, int totN, vector< pair<int, int> >adj[])
{
    vector <int> dis(totN+1, INT_MAX);
    priority_queue <pair<int,int>, vector<pair<int,int>>, greater<pair<int, int>>>pq;

    pq.push(make_pair(0, src));
    parent[src]=-1;
    dis[src]=0;
    while(!pq.empty())
    {
        pair<int, int>current_node= pq.top();
        pq.pop();
        int u=current_node.second;
        int n_du=current_node.first;//new distance of u
        if(n_du>dis[u])
        {
            continue;
        }
        int sz=adj[u].size();
        for(int i = 0; i < sz; i++)
        {
            int v=adj[u][i].first;
            int w_uv=adj[u][i].second;
            if(dis[u]+w_uv<dis[v])
            {
                dis[v]=dis[u]+w_uv;
                parent[v]=u;
                pq.push(make_pair(dis[v], v));
            }
        }
    }
    for(int i=1; i<=totN; i++)
    {
        if(dis[i]!=0)
        {
            cout<<i<<" "<<dis[i]<<endl;
        }
    }
    cout<<endl;
}
void path_target(int source,int node)
{
    if(node == source)
    {
        cout<<node<<" ";
        return ;
    }
    path_target(source,parent[node]);
    cout<<node<<" ";
}
int main ()
{
    int n, m, s, t;
    cin>>n>>m;
    {
        vector< pair<int, int> >adjlistwted[n+1];
        for(int i=0; i<m; i++)
        {
            int p, q, w;
            cin>>p>>q>>w;
            adjlistwted[p].push_back(make_pair(q, w));
        }
        cin>>s>>t;
        cout<<"Minimum distances from Source"<<" "<<s<<" "<<"to other nodes"<<endl;
        sssp_dijkstra(s, n, adjlistwted);
        cout<<"Path to the target node"<<": "<<t<<endl;
        cout<<"Path taken"<<": ";
        path_target(s, t);
        cout<<endl;
    }
    return 0;
}
