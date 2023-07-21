#include<stdio.h>
int main()
{
	int a,b,op;
	scanf("%d%d%d",&a,&b,&op);
	switch(op)
	{
		case 1:
			printf("a+b=%d",a+b);
			break;
		case 2:
			printf("a-b=%d",a-b);
			break;
		case 3:
			printf("a*b=%d",a*b);
			break;
		case 4:
			printf("a/b=%d",a/b);
		case 5:
			printf(" a mod b=%d",a%b);
			break;
	}
	return 0;
	
}
