//printing all arithmetic operations
#include<stdio.h>
void main()
{
	  int a, b, s,d,m,D,p;
	  a = 11;
	  b = 2 ;
	  
	  s = a+b;
	  d = a*b;
	  m = a-b;
	  D = a/b;
	  p = a%b;
	   
	   printf("the sum of%d and %d is %d\n",a,b,s);
	   printf("the multiplication of%d and %d is %d\n",a,b,d);
	   printf("the subtraction of%d and %d is %d\n",a,b,m);
	   printf("the reminder of%d and %d is %d\n",a,b,D);
	   printf("the quotient of%d and%d is %d\n",a,b,p);
}
