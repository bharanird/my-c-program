#include<stdio.h>
int main()
{
	int arraysize,i;
	scanf("%d",&arraysize);
	int arr[arraysize];
	for(i=0;i<arraysize;i++)
	scanf("%d",&arr[i]);
	int x;
	scanf("%d",&x);
	int flag=0;
	for(i=1;i<arraysize;i++)
	{
		if(arr[i]==x)
		flag=1;
		break;
		
	}
	(flag==1)?printf("Available"):
	printf("Not available");
}
