#include<stdio.h>
void main()
{
int num,r;
printf("Enter the number...\n");
scanf("%d",&num);
r=num%10;
num=num/10;
num=num/10;
num=num*10+r;
printf("num=%d",num);
}
