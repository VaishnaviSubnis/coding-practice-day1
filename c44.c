#include<stdio.h>
int main()
{
int num=5;
printf("Two's complement %d",~(~(~num+1)));
return 0;
}
