#include<stdio.h>
int main()
{
	int lower,upper,mid,a[5],search;
	printf("element to search");
	scanf("%d",&search);
	printf("eter the array ellemt");
	for(int i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	lower=0;
	upper=5-1;
	mid=(lower+upper)/2;
	while(lower<=upper)
	{
		if(a[mid]<search)
		{
			lower=mid+1;
		}
		else if(a[mid]==search)
		{
			printf("Found");
			break;

		}
		else
		{
			upper=mid-1;
		}
		mid=(lower+upper)/2;

	}
	if(lower>upper)
	{
		printf("Niot found");
	}

}