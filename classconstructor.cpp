#include<iostream>
using namespace std;
class testing
{
public:
	void sum(int a,int b); //simple function
	testing(int a,int b); //constructor of same class name defined
private:
     int a=7;
     int b=3;	

};
testing::testing(int a,int b)    //contructor
{
	int w;
	w=a-b;
	cout<<"the subtraction of number is"<<w;
}
void testing::sum(int a,int b)
{
	int c=0;
	c=a+b;
	cout<<"the sum of number is:"<<c;
}
int main()
{
	testing testing(4,6); //constructor called
	testing.sum(2,2); // function called
}