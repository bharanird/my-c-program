#include<stdio.h>
int main()
{
	int a,i,flag=0;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	
	{
		if(a%i==0){
			flag=1;
			break;
		}
	}
	if(flag=0)
	printf("The given number %d is prime",a);
	else 
	printf("%d is not prime",a);
}
