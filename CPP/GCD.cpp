#include <stdio.h>
#include <conio.h>
gcd(int n,int m)
	{ if(m<=n && n%m == 0)
	   return m;
	  if(n < m)
	   return gcd(m,n);
	  else
	   return gcd(m,n%m);
	 }
void main()
	{ int n,m,divisor;
	  printf("Enter the two numbers : ");
	  scanf("%d%d",&n,&m);
	  divisor=gcd(n,m);
	  printf("The Greatest Common factor of %d and %d is %d",n,m,divisor);
	  getch();
}
