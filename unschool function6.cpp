#include <stdio.h>
#include <math.h>

int main () 
{
   int n,x,res;
   printf("\nenter the value of base number:\n");
   scanf("%d", &x);
   printf("\nenter the value of power number:\n");
   scanf("%d", &n);
   res=pow(x,n);
   printf("\nthe final value is: %d \n",res );
}
