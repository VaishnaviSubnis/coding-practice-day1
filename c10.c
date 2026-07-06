#include<stdio.h>
int main()
{
int a,b,temp;
printf("the two numbers are as follows:");
scanf("%d %d",&a,&b);
temp=a;
a=b;
b=temp;
printf("the swapped numbers are:%d %d",a,b);
return 0;

}
