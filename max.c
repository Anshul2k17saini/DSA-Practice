#include <stdio.h>
int main()
{
	int a[5],max,i,j;
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<5;i++)
	{
		if(a[i]<a[0])
		{
			j=a[i];
			a[i]=a[0];
			a[0]=j;

			max=a[0];
		}


	}
	printf("less number:%d",max);


	return 0;
}