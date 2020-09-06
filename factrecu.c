#include<stdio.h>
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	
	}
	else
	{
		return 1;
	}


}
int main()
{
	int n;
	printf("enrer number for factorial:");
	scanf("%d",&n);
	printf("factorial of he number:%d",fact(n));

}