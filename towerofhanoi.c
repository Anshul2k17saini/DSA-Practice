#include <stdio.h>
void toh(int n,int x,int y,int z)
{
	if(n>0)
	{
	void toh(n-1,x,z,y);
	printf("%dto%d",x,z);
	void toh(n-1,y,x,z);
    }
}
int main()
{
	int n;
	printf("enter the number of dics");
	void toh(n,1,2,3);

	return 0;
}