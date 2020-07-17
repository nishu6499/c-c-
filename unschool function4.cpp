#include <stdio.h>
#include <string.h>

int main () 
{
   char str1[20];
   printf("enter sring :");
   scanf("%s", &str1);
   strupr(str1);
   printf("the reversed string is : %s", str1);
}
