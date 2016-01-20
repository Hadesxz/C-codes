#include<stdio.h>
#include<conio.h>

//void starline();
void repchar(char,int);

int main()
{
	char chin;
	int nin;

	printf("Enter a character: ");
	scanf("%c",&chin);
	printf("Enter number of times to repeat: ");
	scanf("%d",&nin);

	repchar(chin,nin);

	_getch();
	return 0;
}
void repchar(char ch,int n)
{
	for (int j=0; j<n; j++)
		printf("%c",ch);
		printf("\n");
}

/*repchar('-',43);
	printf("Data type Range\n");
	repchar('=',23);
	printf("char -128 to 127\n");
	printf("short -32,768 to 32,767\n");
	printf("int System dependent\n");
	printf("long -2,147,483,648 to 2,147,483,647\n");
	repchar('-',43);*/


	//starline(); //call to function
	//printf("Data type Range\n");
	//starline(); //call to function
	//printf("char -128 to 127\n");
	//printf("short -32,768 to 32,767\n");
	//printf("int System dependent\n");
	//printf("long -2,147,483,648 to 2,147,483,647\n");
	//starline(); //call to function
//void starline()
//{
//	for (int j=0; j<45; j++)
//		printf("*");
//		printf("\n");
//}