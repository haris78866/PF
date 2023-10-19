#include<stdio.h>
void check(int year);

int main ()
{
int year;

printf("enter the year \n");
scanf("%d",&year);

check( year);

return 0;
}

void check(int year)
{
if (year%100 ==0 && year%400)
{
printf("leap year \n");
}
else
{
printf("not a leap year \n ");
}
}

