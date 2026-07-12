#include<stdio.h>
int main()
{
int num;
printf("Enter a number:");
scanf("%d",& num);
if(num<2)
{
printf("number is not prime.");
}
else
{
for(int i=2;i<=num-1;i++)
{
if(num%i==0)
{
    break ;
printf("the number is composite");
}
else
{
printf("the number is prime");
}}}
return 0;
}
