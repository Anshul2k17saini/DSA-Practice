#include<iostream>
using namespace std;
int a[6],top=-1; 
void push(int n)
{
    if(top==6-1)
    {
        cout<<"STACK is FULL.";
    }
    else
    {
     top++;
    }
    a[top]=n;
}
void print(){
    int i;
    if(top==-1)
    {
        cout<<"STACK is EMPTY.";
    }
    for(i=0;i<6;i++)
    {
        cout<<a[i];
    }
}
void pop()//pop is not working *******************
{
    int t;
    if(top==-1)
    {
        cout<<"STACK is EMPTY.";
    }
    t=a[top];
    t--;   
}
int main()
{
    int n,ch;
    while(1)
    {
        cout<<"1.push\n";
        cout<<"2.print\n";
        cout<<"3.pop\n";
        cout<<"4.exist\n";
        cin>>ch;
        switch(ch)
        {
         case 1:
              cout<<"enter the number to insert:";
              cin>>n;
              push(n);
              break;
         case 2:
              print();
              break;
         case 3:
              pop(); 
              break;
         case 4:
             return 0;
             break;
         default:
            cout<<"wrong choice enter";
            break; 

        }

    }
    
}
//*********************************************************to find the minimum element in the array***************************
/*
#include<iostream>
using namespace std;
int a[6],top=-1; 
void push(int n)
{
    if(top==6-1)
    {
        cout<<"STACK is FULL.";
    }
    else
    {
     top++;
    }
    a[top]=n;
}
int mine(int top)
{
   int min=a[top],i;
   for(i=top;i>=0;i--)
   {
       if(min>a[i])
       {
           min=a[i];
       }
   }
   return min;
}
void print(){
    int i;
    if(top==-1)
    {
        cout<<"STACK is EMPTY.";
    }
    for(i=0;i<6;i++)
    {
        cout<<a[i];
    }
}
void pop()
{
    int t;
    if(top==-1)
    {
        cout<<"STACK is EMPTY.";
    }
    t=a[top];
    t--;  
    mine(top);
}
int main()
{
    int n,ch;
    while(1)
    {
        cout<<"1.push\n";
        cout<<"2.print\n";
        cout<<"3.pop\n";
        cout<<"4.exist\n";
        cin>>ch;
        switch(ch)
        {
         case 1:
              cout<<"enter the number to insert:";
              cin>>n;
              push(n);
              break;
         case 2:
              print();
              break;
         case 3:
              pop(); 
              break;
         case 4:
              cout<<"minimum of stack is:"<<mine(top);
              break;
         case 5:
             return 0;
             break;
         default:
            cout<<"wrong choice enter";
            break; 

        }

    }
    
}
*/