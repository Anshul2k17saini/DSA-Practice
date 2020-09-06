#include <stdio.h>
void enque(int re,int x)
{
	int num;
	if(re==x)
	{
		printf("the que is empty")
	}
	else
	{
	printf("enter number inser in que:\n")
	for(re=0;re<n;re++)
	{
		scanf("%d",&num);
		a[re]=num;
    }

    } 

}
void deque()
{
	if(front==re)
	{
		printf("que is empty")
	}
	else////dothis dont give up man/*****************************************************************/
	{

	}/**************************************************************/

}
void printque(int front,int re)
{
	if(front==re)
	{
		printf("que is empty")
	}
	else
	{
	for(int i=front;i<=re;i++)
	{
		printf("%d\n",a[i]);

    }

    }
}
int main()
{
	int front=0,re=0,a[n],x=n,i,s;
	while(1)
	{
		printf("enter the choice:\nenque:a\ndedue:b\nprint que:c")
		scanf("%d",s);
		switch(s)
		{
			case 1:
			   enque(front,re);
			case 2:
			   deque(re,x); 
			case 3:
			   printque();     
			   

			   
		}
	}
	return 0;
}