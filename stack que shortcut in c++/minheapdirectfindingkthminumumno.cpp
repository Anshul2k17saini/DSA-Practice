#include <bits/stdc++.h> 
using namespace std;
int main()
{
    priority_queue <int, vector<int>, greater<int> > minheap;
    int n,j,c=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>j;
        minheap.push(j);
    }
    int k;
    cin>>k;
    while(c<k)
    {
         minheap.pop();
         c++;
    }
    cout<<minheap.top();
    

    return 0;
}
