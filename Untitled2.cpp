#include<stdio.h>
int main()
{
	int i, k;
	printf("press 0 to exit\n");
	do
	{
		printf("%d\n",i);
		i++;
		scanf("%d", &k);
		if (k==0)
		break;
	}
	while(1);	
}
