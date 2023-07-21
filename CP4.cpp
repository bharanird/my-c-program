#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the amount purchase:");
	scanf("%d",&a);
	if(a>3000)
	{
		b=(20*a)/100;
		c=a-b;
		printf("The total amount is : %d",c);
	}
	return 0;
	
}
	
