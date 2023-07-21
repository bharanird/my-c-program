#include<stdio.h>
int main ()
{
	int a,i,c=0;
	scanf("%d",&a);
	for(i=1;i<a/2;i++){
		if(i*i==a)
		{
			c=1;
			break;
		}
	}
	if(c==1)
	printf("The given number%d is perfect sq",a);
	else
	printf("%d,NOt a perfect sq",a);
	return 0;
}
