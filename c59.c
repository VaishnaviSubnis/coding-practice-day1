#include<stdio.h>
int main()
{
int a;
printf("Enter a number:");
scanf("%d",&a);
if (a<2)
{
printf("not prime");
}
else
{
for(int i=2;i<=a-1;i++)
{
if(a%i==0)
{
printf("\nnot prime");
}
else{
printf("prime");
}}
 }
 return 0;
}
