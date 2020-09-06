#include<stdio.h>
int main()
{
	int i,j,n,a[10],t;
	printf("enter the size of the array");
	scanf("%d",&n);
	printf("enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	//sorting in accending

	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;

			}

			
		}
	}
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}