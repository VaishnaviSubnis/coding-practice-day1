#include<stdio.h>
int main()
{
int a;
printf("Enter the number:");
scanf("%d",&a);
if(a>0)
{
printf("The number a=%d is +ve",a);}
else if (a==0)

{
printf("The number a=%d is neutral",a);
}
else
     {
     printf("The number a=%d is negative",a);
     }
return 0;

}

