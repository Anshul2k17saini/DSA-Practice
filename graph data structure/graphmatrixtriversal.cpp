#include <iostream>
using namespace std;
int main()
{
    int v;
    cout<<"ente no of vertex";
    cin>>v;
    int e;
    cout<<"ente no of edge";
    cin>>e;
    int f;
    int to;
    int m[v][v];
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            m[i][j]=0;
        }
    }
    for(int i=0;i<e;i++)//non direted graph
    {
        cout<<"from";
        cin>>f;
        cout<<"to";
        cin>>to;
        m[f][to]=1;
        m[to][f]=1;//not do this for directed graph in ehich direaction is given
    }
    for(int i=0;i<v;i++)
    {
        for(int j=0;j<v;j++)
        {
            cout<<m[i][j];
        }
    }
    return 0;
}
