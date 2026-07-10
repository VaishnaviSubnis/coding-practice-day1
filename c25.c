#include<stdio.h>
int main()
{
int a,b;
printf("Enter the numbers:");
scanf("%d %d",&a,&b);
if(a>b)
{
printf("The number %d is greater than the number %d.",a,b);
}
else
{
printf("The number %d is greater than the number %d.",b,a);
}
return 0;
}
