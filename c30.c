#include<stdio.h>
int main()
{
int balance=50000;
int choice;
printf("To check:\nDeposit = Enter 1 \nWithdraw = Enter 2 \nCheck Balance = Enter 3");
printf("\nEnter the choice:");
scanf("%d",&choice);
if(choice==1)
{
int amount;
printf("Enter the amount to deposit:");
scanf("%d",&amount);
if (amount<=0){
    printf("Invalid!!");
}
else{
balance=balance+amount;
printf("Check the new balance:%d",balance);
}
}
else if(choice==2)
{
    int amount;
    printf("Enter the amount to withdraw:");
scanf("%d",&amount);

if (amount<=0){
    printf("Invalid amount!!!");
    }
   else if(amount<=balance){
balance=balance-amount;
printf("Check the new balance:%d",balance);
}
else{
    printf("Insufficient balance!!!");
    }
}

else if(choice==3)
{
printf("Check the current balance:%d",balance);
}
else if (choice!=1 && choice!=2 && choice!=3)
{
printf("\nINVALID OPTION\nPLEASE ENTER 1,2 or 3 TO GET DESIRED OUTCOME.");
}
return 0;
}

