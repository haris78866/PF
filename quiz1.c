#include<stdio.h>
int order(int num);
int main ()
{
int num;
printf("enter the number of orders  \n");
scanf("%d",&num);
printf(" the num is %d \n",num, order( num));


return 0;
}



int order(int num)
{
if (num%2 ==0)
{
printf("bake even number of items \n");
}
else if (num/2 !=0 )
{
printf("bake odd number of items \n");
}
else 
{
printf("dont bake nay item \n");
}
return 0;
}
