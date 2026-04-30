#include<stdio.h>
int main()
{
	int n,orignal,reverse=0 ,reminder;
	printf("enter the no=");
	scanf("%d",&n);
	orignal=n;
	while(n!=0)
	{
		reminder=n%10;
		reverse= reverse* 10+reminder;
		n /=10;
	}
	if(orignal==reverse)
	{
		printf("palindrome no");
	}
	else
	{
		printf("not palindrome");
	}
	return 0;
	
	
}