#include <stdio.h>
#include <conio.h>

int main()
{
	int a;
	int num;

	printf("Enter a number: ");
	scanf("%d",&num);

	for(a=1; a<=20; a++)
		printf("	%d x %d = %d \n",num,a,a * num);


	//int b=99;
	//while(b != 0)
	//{
	//	scanf("%d",&b);
	//	printf("\n");
	//}




	_getch();
	return 0;
}