#include<stdio.h>
struct emp
{
	char name[50];
	int id;
	int exp;
	int salary;
};
int main()
{
	int i=0;
	struct emp e[5];
	
	printf("enter details of 5 employees:\n");
	for(i=0;i<5;i++)
	
	scanf("%s %d %d %d", &e[i].name, &e[i].id, &e[i].exp, &e[i].salary);
	
	printf("the details are:");
	for(i=0;i<5;i++)
	printf("\nname:%s\nid:%d\nexp:%d\nsalary:%d\n", e[i].name, e[i].id, e[i].exp, e[i].salary);
}
