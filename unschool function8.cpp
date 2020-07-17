#include <stdio.h>
#include <math.h>

int main () 
{
   int i,n;
   float num[i];
   printf("\nenter the number:\n");
   scanf("%d", &n);
   printf("enter the values to be tested:\n");
   for(i=1;i<=n;i++)
   scanf("%f", &num[i]);
   for(i=1;i<=n;i++)
   printf("the numbers are %f", ceil(num[i]));  
}
