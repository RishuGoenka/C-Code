#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j;
printf("\n all prime no.'s upto 100 are:\n");
for(i=2;i<100;i++)
{ 
for(j=2;j<i;j++)
{ 
if(i%j==0)
break;
}
if(i==j)
printf("%d ",i);
}getch();
}
