#include<iostream>
#include<list>
#include<stack>
using namespace std;
class graph;
{
    int v;
    list<int>*adj;
    void topologicalsort(int v,bool visited[],stack<int>,&Stack);
public:
    Graph(int v);
    void addEdge(int v,int w);
    void topologicalsort();
};
Graph::Graph(int v)
{
    this->v=v;
    adj=new list<int>[v];
}
void Graph::addEdge(int v,int w)
{
    adj[v].push_back(w);
}
void Graph::topologicalSort(int v,bool visited[],stack<int>&stack)
{
    visited[v]=true;
    list<int>::iterator i;
    for()
}
