#include<stdio.h>
int main()
{
int sum=1,n=1;

for(n=1;n<=5;n=n+1)
{
    sum=(n*(n+1))/2;
}
printf("The sum of natural numbers is:%d",sum);
return 0;
}
