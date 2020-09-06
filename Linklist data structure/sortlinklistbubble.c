#include <stdio.h>                                   //self made
#include <stdlib.h>
struct node
{
	struct node *next;
	int data; 
};struct node *start=NULL;

void insertfront(int num)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node)); //creation of node take place with  memory allocation 
	
	temp->data=num;
	temp->next=NULL;
	if(start==NULL)
	{
		start=temp;
	}
	else{
		temp->next=start;
	    start=temp;
	}

}
void insertend(int num)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node)); //creation of node take place with  memory allocation 
	temp->data=num;
	temp->next=NULL;
	struct node *temp2; 
	temp2=start;
	while(temp2->next!=NULL)
	{
		temp2=temp2->next;

	}
	temp2->next=temp;      // as temp is addres of whole node as declare pointer struct node *temp temp addres hota ha-
}
void swap(struct node*a,struct node*b)
{
	int t=a->data;
	a->data=b->data;
	b->data=t;
}
void bubblesort()
{
    struct node *temp=start;
    while(temp->next!=NULL)
    {
    	temp=temp->next;
    	if(temp->data>temp->next->data)
    	{
    		swap(temp,temp->next);

    	}
    	temp=temp->next;

    }

}
void linklistprint()
{
	struct node *temp=start;
	if(start==NULL)
	{
		printf("linklist is empty");
	}
	while (temp->next!=NULL)
	{
		printf("%d ",temp->data);
		temp=temp->next;
	}
	printf("%d",temp->data);  //this is for lass null ka equal wala
}

int main()
{
	char ch;
	int p,t,u,g,n;
	while(1)
	{
	  printf("link list for insertion:");
	  printf("\nChoose operation to perform for front:afor printlinklist:d andfor exit:e (a,b,c,d,):\n");
      scanf(" %c",&ch);
      switch(ch)
      {
    	case 'a':
    	   printf("enter the number to inser in front:\n");
    	   scanf("%d",&p);
    	   insertfront(p);

    	   break;
    	case 'b':
    	   printf("enter the number to inser in end:");
    	   scanf("%d",&t);
    	   insertend(t);
    	   break;
    	case 'c':
    	   bubblesort();
    	   break;
    	case'd':
    	    linklistprint();
    	    break;
    	case'e':     //for ending the loop option
    	 return 0;
    	 break;   
    	 default:
    	     printf("wront choice\n");
             break;
        }

    }  

   return 0;
}   
    	     