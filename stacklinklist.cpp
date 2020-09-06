/**********stackes can also be done directely using the 
function and declaring direct 
in vector using stack.h header file*********/
#include<stdio.h>
#include <stdlib.h>
struct node{
	struct node *next;
	int data;
};struct node *start=NULL;                                                   
void top() 
{
	struct node *temp=start;
	if(start==NULL)
	{
		printf("empty top no data");
	}
	else
	{
	while(temp->next!=NULL)
	{
		temp=temp->next;

	}
	printf("top data:%d",temp->next=data);
    }
}
void push(int n)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=n;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else
	{
	temp->next=start;
	start=temp;
    }

}
void pop()
{
	struct node *temp=start;
	if(start==NULL)
	{
		printf("\nlink list is empty nothing to pop\n");

	}
	else
	{
		start=start->next;
		free(temp);
	}
	/*if(start->next=NULL)// **********dout for print list if deleat the first element so have to put start=NULL*************
	{
		start=NULL;
	}*/
}
void linklistprint()
{
	struct  node *temp=start;
	if(start==NULL)
	{
		printf("link list empty");
	}
	else
	{
	while(temp->next!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
		
	}
	printf("%d",temp->data);
   }
}



int main()
{
	int n;
	while(1)
	{
		int ch;
		printf("\nenter your choice (top:1,push:2,pop:3,printstack:4,exit:5)\n");
	    scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			     top();
			     break;
			case 2:
			     printf("enter the data of Stack\n");
	             scanf("%d",&n);
			     push(n);
			     break;
			case 3:
			     pop();
			     break;
			case 4:
			     linklistprint();
			     break;         
			case 5:
			    exit(0);
			    break;                
		}
	}
 return 0;
}

