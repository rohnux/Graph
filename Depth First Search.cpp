//Depth First Search or DFS for a Graph

#include<bits/stdc++.h>
#include<list>
#include<queue>
#include<iterator>
using namespace std;
class dfs
{
    int v; // No.of vertices
    int connected_component;
    list<int>*adj;
public:
    dfs(int v)
    {
        this->v=v;
        adj=new list<int>[v];
        connected_component=0;
    }
    void addedge(int v,int w)
    {
        adj[v].push_back(w); // Add w to v’s list.
        adj[w].push_back(v);
    }

    void dfs_traversal(int s, bool visit[])
    {
        visit[s]=true;
        cout<<s<<" ";
        list<int>::iterator it;
        for(it=adj[s].begin(); it!=adj[s].end(); it++)
        {
            if(visit[*it]==false)
                dfs_traversal(*it,visit);

        }

    }

    void dfs_call()
    {
        bool *visit=new bool[v]; //visited array
        for(int i=0; i<v; i++)
            visit[i]=false; // Mark all the vertices as not visited

        for(int i=0; i<v; i++)
        {
            if(visit[i]==false)
            {
                dfs_traversal(i,visit);
                connected_component++;
                cout<<"\n";
            }
        }
        cout<<"\nNo. of connected components:"<<connected_component;
    }
};

int main()
{
    int n,x,y,s,e;
    cout<<"-----------------Depth First Search---------------------";
    cout<<"\nEnter no. of vertices in the  Graph:";
    cin>>n;
    cout<<"\nEnter no. of edges in the  Graph:";
    cin>>e;
    dfs d(n);
    cout<<"\nEnter edges from one vertex to another vertex in the graph:\n";
    for(int i=0; i<e; i++)
    {
        cin>>x>>y;
        d.addedge(x,y);
    }
    cout<<"\nDFS Taversal is given by:\n";
    d.dfs_call();

    return 0;
}

