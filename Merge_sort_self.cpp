#include <iostream>
using namespace std;
void Merge(int a[],int lower,int mid,int u)
{
    int n=u+1;
    int b[n];
    int i=lower;
    int j=mid+1;
    int k=lower;
    while(i<=mid&&j<=u)
    {
        if(a[i]<=a[j])
        {
            b[k]=a[i];
            i++;
        }
        else
        {
            b[k]=a[j];
            j++;
        }
        k++;
    }
    if(i>mid)
    {
        while(j<=u)
        {
            b[k]=a[j];
            j++;
            k++;
        }
    }
    else
    {
        while(i<=mid)
        {
            b[k]=a[i];
            j++;
            k++;
        }
        
    }
    for(int c=0;c<n;c++)
    {
        a[c]=b[c];
    }
    
}
void Mergesort(int a[],int l,int u)
{
    int lower=l;
    int upper=u;
    int mid=lower+(upper-lower)/2;
    Mergesort(a,lower,mid);
    Mergesort(a,mid+1,upper);
    Merge(a,lower,mid,upper);
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    Mergesort(a,0,n-1);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}