#include<stdio.h>
int main()
{
	int age,wt,rh,glu,bp,tt;
	char bg[3];
	printf("Enter age: ");
	scanf("%d", &age);
	printf("Enter your weight: ");
	scanf("%d", &wt);
	printf("Are you a teetotaler: ");
	scanf("%d", &tt);
	printf("Enter recent history: ");
	scanf("%d", &rh);
	printf("Enter glucose level: ");
	scanf("%d", &glu);
	printf("Enter BP level: ");
	scanf("%d", &bp);
	printf("Enter the blood group: ");
	scanf("%s",bg);
	if(age>18)
	{
		if(wt>=55&&wt<=85)
		{
			if(tt==1)
			{
				if(rh==0)
				{
					if(glu==1)
					{
						if(bp>=80&&bp<=120)
						{
							printf("The candidate with blood group %s can donate blood",bg);
						}
					}
				}
			}
		}
		
	}
	else
	{
		printf("You are not eligible");
		
	}
	return 0;
}
