#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    if(binary_search(a, a + n,k))
    {
        cout<<"element present";
    }
    else
    {
        cout<<"not found";
    }
    

    return 0;
}
