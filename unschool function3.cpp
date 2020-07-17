#include <stdio.h>
#include <string.h>

int main () 
{
   char str1[20];
   int len;
   printf("enter sring :");
   scanf("%s", &str1);
   len=strlen(str1);
   printf("the length of string is : %d", len);
}
