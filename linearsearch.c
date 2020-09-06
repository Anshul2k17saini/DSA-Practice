#include <stdio.h>
int main()
{
	int i,j,n,a[10],s;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("enter the element to be search:");
	scanf("%d",&s);
	printf("enter the element of array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("Found");
			break;
		}
		else if(i==n)
		{
			printf("Not Found");
			
		}

	}

	return 0;

}