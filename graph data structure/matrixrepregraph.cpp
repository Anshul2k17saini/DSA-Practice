#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j]=0;
        }
    }
    int from;
    int to;
    for(int i=0;i<n;i++)
    {
        cout<<"from";
        cin>>from;
        cout<<"to";
        cin>>to;
        a[from][to]=1;
        a[to][from]=1;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }
    

    return 0;
}
