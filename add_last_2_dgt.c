#include<stdio.h>
void main()
{
int num,r;
printf("enter the number...\n");
scanf("%d",&num);
r=num%10;
num=num/10;
num=num%10;
num=r+num;
printf("sum of last two digits is num=%d\n",num);
}
