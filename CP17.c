#include<stdio.h>
int main()
{
	int arraysize,i;
	scanf("%d",&arraysize);
	int arr[arraysize];
	for(i=0;i<arraysize;i++)
	scanf("%d",&arr[i]);
	int temp=arr[0];
	for(i=1;i<arraysize;i++)
	{
		if(arr[i]<temp)
		temp=arr[i];
		
	}
	printf("%d",temp);
}
