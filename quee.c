#include <stdio.h>
int main()
{
    int a[5],front=-1,rear=-1,t,i;
    int n;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        if(rear==-1&&front==-1)
        {
            rear=front=0;
        }
        else
        {
            rear=rear+1;
        }
        a[rear]=n;
    }
    for(i=0;i<5;i++)
    {
        printf("%d",a[i]);
    }
    

    return 0;
}

