#include <stdio.h>
#include <conio.h>

int main()
{	
	int no1=0;
	int no2=0;

	printf("Enter First Number: ");
	scanf("%d",&no1);

	printf("Enter Second Numbmer: ");
	scanf("%d",&no2);

	if (no1>no2)
	{
		printf("First Number is Greater than Second Number.\n");
	}	else if (no1<no2)
	{
		printf("First Number is Less than Second Number.\n");
	} else
	{
		printf("First Number is Equal to Second Number.\n");
	}

	switch(no1)
	{
	case 0: printf("First Number is 0.");break;
	case 1: printf("First Number is 1.");break;
	case 2: printf("First Number is 2.");break;
	case 3: printf("First Number is 3.");break;
	default :printf("Error");break;
	}



	_getch();
	return 0;
}
