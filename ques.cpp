#include<stdio.h>
int a[6],re=-1,front=-1;
void inque(int data)
{
	if(re==6-1)
	{
		printf("queis full");
	}
	else if(re==-1&&front==-1)
	{
		  front=0;
      re=0;

	}
	a[re]=data;
	re++;
}
void print()
{
	for(int i=0;i<6;i++)
	{
		printf("%d",a[i]);

	}
}
void deque()
{
	if(re==-1&&front==-1)
	{
		printf("Ques is empty");
	}
	t=a[front];
	front++;
}
int main()
{
int n,ch;
    while(1)
    {
        cout<<"1.inque\n";
        cout<<"2.print\n";
        cout<<"3.deque\n";
        cout<<"4.exist\n";
        cin>>ch;
        switch(ch)
        {
         case 1:
              cout<<"enter the number to insert:";
              cin>>n;
              inque(n);
              break;
         case 2:
              print();
              break;
         case 3:
              deque(); 
              break;
         case 4:
             return 0;
             break;
         default:
            cout<<"wrong choice enter";
            break; 

        }

    }
    return 0;
    
}