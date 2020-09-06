#include <stdio.h>
void swap(int* d, int* b)  
{  
    int t = *d;  
    *d = *b;  
    *b = t;  
}  
int part(int a[],int start,int end)
{
    
    int pivot=a[end];
    int pindex=start;
    for(int i=start;i<end;i++)
    {
        if(a[i]<=pivot)
        {
            swap(&a[i],&a[pindex]);
            pindex=pindex+1;
        }
    }
    swap(&a[pindex],&a[end]);
    return pindex;
}
void quicksort(int a[],int start,int end)
{
    if(start<end)
    {
        int pi= part(a,start,end);
        quicksort(a,start,pi-1);
        quicksort(a,pi+1,end);
    }
}
int main()
{   
    int n,i;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
