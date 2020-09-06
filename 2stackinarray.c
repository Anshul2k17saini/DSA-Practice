#include<stdio.h>
int a[10];
int top1=-1;
int top2=10;
void push1(int s)
{
	if(top1+1==top2)
	{
		printf("stack one is full");
	}
	top1++;
	a[top1]=s;

}
void push2(int t)
{

	if(top2==top1)
	{

		printf("stack is full");

	}
	top2--;
	a[top2]=t;
	
}
void printarr()
{
	/*printing stack one*/
  for (int i = top1; i >= 0; --i)
  {
    printf ("%d ", a[i]);
  }

   printf ("\n");
}

int main()
{
	int ch,t,s;
	while(1)
	{
		printf("Enter your choice\n");
		printf("PUSH in stack1:1\n");
		printf("PUSH in stack2:2\n");
		printf("print both stack:3\n");
		printf("enter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			    printf("enter the number to puch:");
			    scanf("%d",&s);
			    push1(s);
			    break;
			case 2:
			    printf("enter the number to puch:");
			    scanf("%d",&t);
			    push1(t);
			    break;
			case 3:
			    printarr();  
			    break;
			default:
			{ 
				printf("wrong choice");
				break;

			}      
    

		}
	}
	return 0;
}
