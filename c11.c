#include<stdio.h>
int main()
{
int a,b;
printf("The first number is: ");
scanf("%d",&a);
printf("The second number is: ");
scanf("%d",&b);
 a=a+b;
 b=a-b;
 a=a-b;
printf("the value of a and b now after swapping is:%d,%d",a,b);
return 0;
}
