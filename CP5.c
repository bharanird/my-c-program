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
		printf("Your discount amount is : %d\n",b);
		printf("The total amount is : %d",c);
	}
	else
	{
		printf("No discount for your purchase:");
	}
	return 0;
}
	
