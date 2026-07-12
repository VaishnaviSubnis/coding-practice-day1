#include<stdio.h>
int main ()
{
int even=0,odd=0,i;
for(i=1;i<=10;i++)
if(i%2==0){
even++;}
else
{
odd++;

}
printf("The total even no.s are:%d",even);
printf("The total odd no.s are:%d",odd);
return 0;
}
