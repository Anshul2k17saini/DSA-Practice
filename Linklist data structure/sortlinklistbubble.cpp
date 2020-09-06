#include <iostream.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
}
class list:
{

  public:
  	list()
  	{
  		struct node *start=NULL;

  	}

void insertfront(int num)
{
	struct node *temp=new node; //creation of node take place with  memory allocation 
	
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
	struct node *temp=new node; //creation of node take place with  memory allocation 
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
void linklistmid(int num,int n)
{
	struct node *temp=(struct node *)malloc(sizeof(struct node)); //creation of node take place with  memory allocation 
	temp->data=num;
	temp->next=NULL;
	struct node *temp2=start;
	//struct node *temp3=start;
	int prev=1;
	while(prev!=n)//error here
	{
		temp2=temp2->next;
		prev++;
	}
	temp=temp2->next;
	temp2->next=temp;
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
void sortlist()                                              ////////////for sorting link using bubble sort/////////
{
	struct node *i=start;
	struct node *j=start->next;
	int t;
	for(i=start;i->next!=NULL;i=i->next)
	{
		for(j=i->next;j!=NULL;j=j->next)
		{
			if(i->data>j->data)
			{
				t=i->data;
				i->data=j->data;
				j->data=t;

			}
		}
	}

}
int main()
{
	char ch;
	int p,t,u,g,n;
	while(1)
	{
	printf("link list for insertion:");
	printf("\nChoose operation to perform for front:a,for end:b for mid,for printlinklist:d andfor exit:e (a,b,c,d,e)\n");
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
    	      printf("enter the number to inser in mid:");
    	   scanf("%d",&g);
    	    printf("enter the number to inser in the position:");
    	   scanf("%d",&n);
    	   if(n>1&&n<counter())
    	   {
    	     linklistmid(g,n);
    	   }
    	   else
    	   {
    	   	printf("use front and end insertion choice");
    	   }
    	    break;
    	 case'd':
    	    linklistprint();
    	    break;
    	 case 'f':
    	    sortlist();
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