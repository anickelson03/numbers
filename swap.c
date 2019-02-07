#include <stdio.h>
 int main(void) 
{
int a,b;
printf("\n enter two numbers to swap:");
scanf("%d %d",&a,&b);
printf("\n before swapping:");
printf("\na=%d",a);
printf("\nb=%d",b);
a=a+b;
b=a-b;
a=a-b;
printf("\n after swapping:");
printf("\na=%d",a);
printf("\nb=%d",b);
return 0;
}
