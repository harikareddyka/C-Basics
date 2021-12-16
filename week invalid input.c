#include<stdio.h>
void main()
{
	 int number;
	 printf("enter the number of the week");
	 scanf("%d",&number);
     if(number==1)
	 {
	 	printf("the day is monday");
	 }
     else if(number==2)    
 	 {
 	 	printf("the day is tuesday");
	 }
     else if(number==3) 
 	 {
 	 	printf("the day is wednesday");
	 }
     else if(number==4)
  	 {
  	 	printf("the day is thursday");
	 }
	 else if(number==5)
  	 {
  	 	printf("the day is friday");
	 }
	 else if(number==4)
  	 {
  	 	printf("the day is saturday");
	 }
	  else if (number==7)
     {
     	printf("the day is sunday");
   	 }   
   	 else
   	 {
   	 	printf("invalid input");
	 }
}
