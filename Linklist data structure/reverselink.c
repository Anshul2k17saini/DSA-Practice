#include<stdio.h>
#include<stdlib.h>
struct node
{
	struct node *next;
	int data;
};struct node *start=NULL;
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
void reverse()
{
	struct node *next,*prev,*current;
	current=start;
	prev=NULL;
	while(current!=0)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;

	}
	start=prev;
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
	int p;
	while(1)
	{
	    printf("\nChoose operation to perform for inser->A for rever->B for print->C\n");
        scanf(" %c",&ch);
      switch(ch)
      {
    	 case 'a':
    	    printf("enter the number to inser in front:\n");
    	    scanf("%d",&p);
    	    insertend(p);

    	    break;
    	 case 'b':
    	   reverse();
    	   break;
    	 case 'c':
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