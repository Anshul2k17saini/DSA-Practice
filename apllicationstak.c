//infix to postfix or prefix 
#include <stdio.h>
#include <stdlib.h>
struct node
{
	int data;
	struct node *next;

};
struct node *start;
void prefix()
{
	char                                                 //not***********-*-*-*--*-*-**-*****----------------------------------------*-**-*-*-*-*-*********complete 

 

}
void puch(int num)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node));
	temp->data=num;
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

int main()
{
	char str[6];
	int n,i,,j;
	for(i=0;i<6;i++)
	{
		scanf("%c")
	}
}
