#include <stdio.h>

int main()
{
	int ataq1, def1, ataq2, def2;

	do
	{
	scanf("%d", &ataq1);
	}while(1 >= ataq1 >= 100);

	do
	{
		scanf("%d", &def1);
	}while(1 >= def1 >= 100);

	do
	{
		scanf("%d", &ataq2);
	}while(1 >= ataq2 >= 100);

	do
	{
		scanf("%d", &def2);
	}while(1 >= def2 >= 100);

	if(ataq1 != def2 && ataq2 != def1)	
		printf("-1");	
	else if(ataq1 != def2 && ataq2 == def1)	
		printf("1");		
	else if(ataq2 != def1 && ataq1 == def2)	
		printf("2");

}