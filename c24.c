#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);

if(a%2==0)
{
printf("The number is divisible by 2.");
}
else
{
printf("It is an odd number.");
}
return 0;
}
