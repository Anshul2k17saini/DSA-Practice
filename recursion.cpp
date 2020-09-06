#include <iostream>
using namespace std;
class rec
{  
public:
    void printstar(int n)
	{
 
		if(n==1)
		{
			cout<<"*";
		}
		else
		{
			cout<<"*";
			printstar(n-1);
		}
	}
};
int main()
{
	rec a;
	 int d;
	cout<<"enter the number for number of stars:";
	cin>>d;
	a.printstar(d);
}