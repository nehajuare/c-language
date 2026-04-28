#include<stdio.h>
int main()
{
	int i,j,n;
	for(j=1;j<=100;j++)
	{
		n=1;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				n=0;
				break;
			}
		}
		if(n==1)
		{
			printf("%d prime no\n",j);
		}
	}
	return 0;
}