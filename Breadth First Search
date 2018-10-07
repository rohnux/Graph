//C++ program for Breadth First Search or BFS for a Graph

#include<bits/stdc++.h>
#include<list>
#include<queue>
#include<iterator>
using namespace std;

 class bfs
 { int v; // No.of vertices
  list<int>*adj;
public:
 bfs(int v)
{  adj=new list<int >[v];
}
void addedge(int v,int w)
{ adj[v].push_back(w); // Add w to v’s list.
  adj[w].push_back(v);

}

void bfs_traverse(int s)
{ bool *visit=new bool[v]; //visited array
  for(int i=0;i<v;i++)
     visit[i]=false; // Mark all the vertices as not visited
  list<int>queue;
  visit[s]=true;
  queue.push_back(s);

 list<int>::iterator it; /* 'it' will be used to get all adjacent
                           vertices of a vertex */

while(!queue.empty())
{  s=queue.front();
   cout<<s<<" ";
   queue.pop_front();

 for(it=adj[s].begin();it!=adj[s].end();it++)
 {  while(!visit[*it])
    {  visit[*it]=true;
       queue.push_back(*it);
    }
   }
  }
cout<<"\n";
}
};

int main()
{  int n,x,y,s,e;
  cout<<"-----------------Breadth First Search---------------------";
 cout<<"\nEnter no. of vertices in the  Graph:";
  cin>>n;
  cout<<"\nEnter no. of edges in the  Graph:";
  cin>>e;
   bfs b(n);
   cout<<"\nEnter edges from one vertex to another vertex in the graph:\n";
  for(int i=0;i<e;i++)
   { cin>>x>>y;
    b.addedge(x,y);
 	}
 cout<<"\nStart BFS Taversal from the vertex:";
 cin>>s;
 cout<<"BFS traversal is given by:\n";
 b.bfs_traverse(s);

return 0;
}

