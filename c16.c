#include <stdio.h>
int main()
{
int SI,p,r,t;
printf("The value of principal,rate and time:");
scanf("%d %d %d",&p,&r,&t);
SI=(p*r*t)/100;
printf("The value of simple interest is:%d",SI);
return 0;
}
