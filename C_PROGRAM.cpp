#include<stdio.h>
int main()
{
    int redmi,GST,price;
    printf("The amount of the mobile :", redmi);
    scanf("%d",&redmi);
    GST=(2.5*redmi)/100;
    printf("The GST added is: %d\n",GST);
    price=redmi+GST;
    printf("The price of the mobile after adding GST is: %d\n",price);
    return 0;
}
