#include<bits/stdc++.h>
using namespace std;
vector<long long> adjlist[100002]; //let maximum size of the node in Graph be 10^5 + 1
vector<long long>travel(10000), pos(10000);
queue<long long>q;
vector<bool>vis(10000, false);
void bfs(long long src)
{

    q.push(src);
    vis[src]=true;
    while(!q.empty())
    {
        long long u=q.front();
        //cout<<u<<" ";
        q.pop();
        for(long long i=0; i<(long long)adjlist[u].size(); i++)
        {
            long long v=adjlist[u][i];
            if(!vis[v])
            {
                travel[v]+=travel[u]+1;
                vis[v]=true;
                q.push(v);
                pos[v] = u;
            }
        }
    }

}
int main()
{
    long long n,e,src;
    cin>>n>>e; //No. of nodes and edges
    for(long long i = 0; i < n; i++)
    {
        vis[i + 1] = false;
    }
    //creating graph in this loop.
    for(long long i = 0; i < e; i++)
    {
        long long u, v;
        cin>>u>>v; //u and v are denoting the bi-directional edges
        //Adjacency List
        adjlist[u].push_back(v);
        adjlist[v].push_back(u);
    }
    cin >> src;
    bfs(src);
    cout << "From the source " << src << " : " << endl;
    cout << "___________________" << endl << endl;


    for(long long i=0; i<n; i++)
    {
        if(i==src)
        {
            continue;
        }
        else if(!vis[i])
        {
            cout << i << " is not reachable." << endl << endl;
        }
        else
        {
            long long node = i;
            vector<long long>vec;
            while(node!=src)
            {
                vec.push_back(node);
                node = pos[node];
            }
            vec.push_back(src);
            reverse (vec.begin(), vec.end());

            cout << "Minimum " << travel[i] << " edges needed to reach " << i << endl;
            cout << "Path taken: ";
            for(auto j: vec)
            {
                cout << j << " ";
            }
            cout << endl << endl;
        }
    }
    return 0;
}
