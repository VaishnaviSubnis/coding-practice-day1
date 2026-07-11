#include<stdio.h>
int main()
{
int marks;
printf("Enter the marks:");
scanf("%d",&marks);

char grade;
if(marks>=90 && marks<=100 )
{
grade='A';
}
else if (marks>=34 && marks<=90)
{
grade='B';
}
else
{
grade='F';
}
printf("You have scored %d and achieved %c grade in your exam.",marks,grade);

return 0;
}
