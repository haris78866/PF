#include<stdio.h>
#define espresso_price 2.50
#define latte_price 3.00
#define cappucino_price 3.50
#define mocha_price 4.00
#define americano_price 2.25
int calbill( int x ,float y);
int main ()
{
int choice,quantity;

printf("WELCOME TO THE COFEE SHOP \n");
printf("HERE ARE THE CHOICE  \n");
printf("1) ESPRESSO : $%.2f \n",espresso_price);
printf("2)LATTE : $%.2f \n",latte_price);
printf("3) cappucino : $%.2f \n",cappucino_price);
printf("4)MOCHA : $%.2f \n",mocha_price );
printf("5)  AMERICANO : $%.2f \n",americano_price);
printf("ENTER YOUR CHOICE  \n");
scanf("%d",&choice);


switch(choice)
{
case 1:
{
printf("ENTER THE QUANTITY \n");
scanf("%d",quantity);
printf("you have slected %d espressoo . That will be $%.2f ,please \n",quantity, calbill( quantity, espresso_price));
printf("ENJOY YOUR COFFEE \n");
break;
}
return 0;
}

int calbill( int quantity,float y)
{
return quantity*y;
}
}

















