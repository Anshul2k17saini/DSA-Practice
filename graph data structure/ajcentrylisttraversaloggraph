#include <iostream>
#include<vector>
using namespace std;
void print(vector<int> g[],int v)
{
    vector <int>::iterator it;
    for(int i=0;i<v;i++)
    {
        cout<<"adjacenterylist for"<<i<<"-->";
        for(it=g[i].begin();it!=g[i].end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<"\n";
    }
}
void add( vector<int> g[],int from,int to)
{
    g[from].push_back(to);
    g[to].push_back(from);
}
int main()
{
    int v;
    cin>>v;
    int e;
    cin>>e;
    int from,to;
    vector<int> g[v];
    for(int i=0;i<e;i++)
    {
        cin>>from;
        cin>>to;
        add(g,from,to);
    }
    print(g,v);
    
}
