#include <iostream>
#include<vector>
using namespace std;
void depthfirstsearch(int start_vertex,vector<int> g[],bool visita[])
{
    visita[start_vertex]=true;
    cout<<start_vertex<<" ";
    for(int i=0;i<g[start_vertex].size();i++)
    {
        if(visita[g[start_vertex][i]]==false)
        {
            depthfirstsearch(g[start_vertex][i],g,visita); //going to next vertex if not visited
        }
    }
    
}
int main()
{
    int v;//vertex
    cin>>v;
    int e;//edges
    cin>>e;
    int from,to;
    vector<int> g[v];
    bool visita[v];
    for(int i=0;i<v;i++)//seting all visited vertex  to false
    {
        visita[i]=false;
    }
    for(int i=0;i<v;i++)
    {
        cout<<visita[i];
    }
    for(int i=0;i<e;i++)
    {
        cout<<"from";
        cin>>from;
        cout<<"to";
        cin>>to;
        g[from].push_back(to);
        g[to].push_back(from);
    }
     depthfirstsearch(0,g,visita);
    return 0;
    
}
