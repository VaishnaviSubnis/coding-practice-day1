#include<stdio.h>
int main()
{
int num;
printf("Enter the number:");
scanf("%d",&num);
int flag=0;
if(num<2)
{
printf("not prime");
flag=1;
}
else {
for (int i=2;i<=num-1;i++)
{
if(num%i==0){
printf("not prime");
flag=1;
break;

}}}
if(flag==0){
printf("prime");
}
return 0;
}
