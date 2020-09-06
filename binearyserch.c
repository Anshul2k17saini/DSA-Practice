#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,mid,flag=0,x;
     scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int low=0,high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        printf("%d",mid);
        if(x==a[mid])
        {
            printf("found baby");
            break;
        }
        else if(x>a[mid])
        {
            low=mid+1;
        }
        else
        {
            high=mid-1;
        }
        
    }
    if(low>high)
    {
        printf(" not presend");
    }
    return 0;
}
/*#include <iostream>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int n,i,x,flag=0;
      cin>>n;
      int a[n];
      cin>>x;
      for(i=0;i<n;i++)
      {
          cin>>a[i];
      }
      int low=0,higth=n-1;
      while(low<=higth)
      {
           int mid=(low+higth)/2;
           if(x==a[mid])
           {
               flag=1;
           }
           else if(x>a[mid])
           {
               low=mid+1;
           }
           else
           {
               higth=mid-1;
           }
          
      }
      if(flag==1)
      {
          cout<<"present";
      }
      else
      {
          cout<<"not present";
      }
  }

    return 0;
}
*/
