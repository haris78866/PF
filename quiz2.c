#include<stdio.h>
int check(int a,int b,int c);



int main ()
{
int a,b,c;
printf("enter the numbers  \n");
scanf("%d %d %d",&a,&b,&c);

printf("%d", check(a,b,c));

return 0;
}

int check(int a,int b,int c)
{
if (a!=0)
{
printf("a is not zero \n");

if (a%b ==0 && a%c ==0)
{
printf("its a common divisor of b and c \n");
}
else 
{
printf("not a common divisor of b and c \n");
}
return 0;
}
}

