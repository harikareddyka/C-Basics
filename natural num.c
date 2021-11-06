#include<stdio.h>
void main()
{    
    int n, s,even,odd;
    n = 5; 
    s = n*(n+1)/2; 
    even = n*(n+1);
    odd = n^2;
    
    printf("the sum of%d first 5 natural numbers%d is %d\n",n,s);
    printf("the sum of%d first 5 even natural numbers%d\n",n,even);
    printf("the sum of%d first 5 odd natural numbers%d\n",n,odd);
}
