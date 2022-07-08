// Online C compiler to run C program online
#include <stdio.h>

int main()
{
int a;
label: 
printf("enter a: ");
scanf("%d",&a);
printf("a is: %d\n",a);

switch (a)
{
case 1: printf("case 1 is printed");
break;
case 2: printf("case 2 is printed");
break;
default: printf("enter correct choice\n");
goto label;

}
return 0;

}