#include<iostream>
using namespace std;
int a[6],re=-1,front=-1;
void inque(int data)
{
	if(re==6-1)
	{
		cout<<"queis full";
	}
	if(re==-1&&front==-1)
	{
	  front=0;
	} 
	re++;
	a[re]=data;
	
}
void print()
{
	if(re==-1&&front==-1)
	{
		cout<<"que is empty";

	}
	else
	{
	for(int i=front;i<=re;i++)
	{
		cout<<a[i]<<"\n";

	}
   }
}
void deque()
{
	if(re==-1&&front==-1)
	{
		cout<<"Ques is empty";
	}
	else
	{
	
	 front++;
    }
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