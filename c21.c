#include<stdio.h>
int main()
{
int a,b;
printf("Enter the number:");
scanf("%d",&a);
printf("Enter the number:");
scanf("%d",&b);
if(a>b)
{
printf("The number a=%d is greater than b=%d",a,b);
}
else
{
printf("The number b=%d is greater than a=%d",b,a);
}

return 0;

}

