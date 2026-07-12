#include<stdio.h>
int main()
{
int last=0;
int prev=1;
int curr;
int r=5;
for(int i=1;i<=r;i++)
{
curr=last+prev;
printf("\n%d",curr);
last=prev;
prev=curr;

}
return 0;
}
