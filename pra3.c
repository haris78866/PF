#include<stdio.h>
int motorbill(int price1,int days);
int carbill(int price2,int days);
int busbill(int price3,int days);

int main ()
{
int days,price1=10,price2=20,price3=30;
char choice;

printf("enter you choice \n");
scanf("%c",&choice);

if (choice=='M')
{
printf("enter the days you need parking\n");
scanf("%d",&days);

printf("%d \n",motorbill(price1,days));
}
else if(choice=='C')
{
printf("enter the days you need parking\n");
scanf("%d",&days);
 printf("%d\n",carbill(price2,days));
 }
else if (choice=='B')
{
printf("enter the days you need parking\n");
scanf("%d",&days);
  printf("%d \n",busbill(price3, days));
 }
 else
 {
 printf("other parking ae not avalible \n");
 }
 

return 0;
}


int motorbill(int price1,int days)
{
return days*price1;
}
int carbill(int price2,int days)
{
return price2*days;
}
int busbill(int price3,int days)
{
return price3*days;
}

