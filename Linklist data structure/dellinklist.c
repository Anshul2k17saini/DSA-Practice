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

int counter()
{
   int con=1;
   struct node *temp=start;
   while(temp!=NULL)
   {
   	temp=temp->next;
   	con++;
   }
   return con;
}


void linklistmid(int num,int n)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node)); //creation of node take place with  memory allocation 
	temp->data=num;
	temp->next=NULL;
	struct node *temp2=start;
	int prev=1;
	while(prev!=n)
	{
		temp2=temp2->next;
		prev++;
	}
	temp=temp2->next;
	temp2->next=temp;

}	
 
 void delfront()
 {
 	struct node *temp=start;
 	if(start==NULL)
 	{
 		printf("\nfirst creat the list list is empty use above option");
 	}
 	start=start->next;
 	free(temp);

 }
void delend()
{
    struct node *temp=start;
    struct node *t;

    while(temp->next!=NULL)
    {
        t=temp;
        temp=temp->next;

    }
    free(t->next);
    t->next=NULL;
} 

 void delmid(int n)
 {
 	printf("%d",n);
 	struct node *temp;
 	struct node *temp2;
 	if(n==1)
 	{
 		temp=start;
 		start=start->next;
 	    free(temp);
 	    
 	}
 	else if(n==counter())
 	{
 		temp=start;
 		for(int i=1;i<n-1;i++)
 		{
 		  temp=temp->next;
 	    }
 	    temp2=temp->next;
 	    temp->next=NULL;
 		free(temp2);
 	}
 	else
 	{
 		temp=start;
 		for(int i=1;i<n-1;i++)
 		{
 			temp=temp->next;
 			printf("%d ",i);
 		}
 		temp2=temp->next;
 		temp->next=temp->next->next;
 		free(temp2);
 	}

 }

int main()
{
	int ch;
	int p,t,u,g,n,q;
	while(1)
	{
	printf("\ninsertion and deletion in linklist->");
	printf("\n 1.Insert at the beginning\n");
    printf("\n 2.Insert at the end\n");
    printf("\n 3.Insert at specified positio\n");
    printf("\n 4.printing link list\n");
    printf("\n 5.Delete from beginning\n");
    printf("\n 6.Delete from the end \n");
    printf("\n 7.Delete from specified position\n");
    printf("\n 8.Exit\n");
    scanf("%d",&ch);
    
    switch(ch)
    {
    	case 1:
    	   printf("enter the number to inser in front:\n");
    	   scanf("%d",&p);
    	   insertfront(p);

    	   break;
    	case 2:
    	   printf("enter the number to inser in end:");
    	   scanf("%d",&t);
    	   insertend(t);
    	   break;
    	case 3:
    	      printf("enter the number to inser in mid:");
    	   scanf("%d",&g);
    	    printf("enter the number to inser in the position:");
    	   scanf("%d",&n);
    	   if(n>1&&n<=counter())
    	   {
    	     linklistmid(g,n);
    	   }
    	   else
    	   {
    	   	printf("use front and end insertion choice");
    	   }
    	    break;
    	case 4:
    	    linklistprint();
    	    break;
    	case 5:
    	     delfront();
    	     break; 
        case 6:
             delend();
             break;     
    	case 7:
    	   printf("\nenter the number to del in the nth term:");
    	   scanf("%d",&q);
    	   if(q>=1&&q<=counter())
    	   {
    	     delmid(q);
    	   } 
    	   else
    	   {
    	   	printf("\nindex start from 1\n");
    	   }
    	   break;
    	 case 8:     
    	 exit(0);
    	 break;   
    	default:
    	     printf("wrong choice\n");
    	     break;


 
    }
 } 
 return 0; 
}
