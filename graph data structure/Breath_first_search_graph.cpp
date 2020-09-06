#include <iostream>
#include<vector>
#include<queue>
using namespace std;
void brethfirstsearch(int start_vertex,vector<int>g[],bool visita[],int v)
{
    queue<int> q;
    q.push(start_vertex);
    visita[start_vertex]=true;
    while(!q.empty())
    {
        int cur=q.front();
        q.pop();
        cout<<cur<<" ";
        for(int i=0;i<g[cur].size();i++)
        {
            if(visita[g[cur][i]]==false)
            {
                q.push(g[cur][i]);
                visita[g[cur][i]]=true;
            }
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
        g[from].push_back(to);//ajacent list for eachj vertex
    }
    brethfirstsearch(0,g,visita,v);

    return 0;
}
