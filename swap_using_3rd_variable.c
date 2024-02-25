#include<stdio.h>
void main()
{
int i,j,temp;
printf("Enter the numbers..\n");
scanf("%d %d",&i,&j);
printf("Before swap i=%d j=%d\n",i,j);
temp=i;
i=j;
j=temp;
printf("After swap i=%d j=%d\n",i,j);
}
