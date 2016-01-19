#include<stdio.h>
#include<conio.h>
#include<Windows.h>

int main()
{
	int k=0; 
	float r=0; 
	float circleArea=0; 
	float l=0; 
	float squareArea=0;
	float b=0;
	float h=0;
	float triangleArea=0;

	do {
	system("cls");
	printf("1.Area of Circle.\n");
	printf("2.Area of Square.\n");
	printf("3.Area of Triangle.\n");
	printf("4.Exit\n");
	printf("Choose 1,2,3,4 >> ");
	scanf("%d",&k);
	system("cls");
	switch(k)
	{
		case 1:	printf("\"Area of Circle\"\n");
				printf("Enter Radius: ");
				scanf("%f",&r);
				circleArea = 3.14 * r * r;
				printf("Area of circle is %f square meter.\n\n",circleArea);
				printf("Press any key to continue... ");
				_getch();break;
		case 2: printf("\"Area of Square\"\n");
				printf("Enter length: ");
				scanf("%f",&l);
				squareArea = l * l;
				printf("Area of square is %f square meter.\n\n",squareArea);
				printf("Press any key to continue... ");
				_getch();break;
		case 3: printf("\"Area of Triangle\"\n");
				printf("Enter base: ");
				scanf("%f",&b);
				printf("Enter height: ");
				scanf("%f",&h);
				triangleArea = 0.5 * b * h;
				printf("Area of Triangle is %f square meter.\n\n",triangleArea);
				printf("Press any key to continue... ");
				_getch();break;
		case 4:	printf("Exit");
				Sleep(500);
				exit(0);
		default: printf("\n Try again!\n\n");break;
	}
}while(k!=4);


		//if(k==1)
	//{
	//	printf("\n\"Area of Circle\"\n");
	//	printf("Enter Radius: ");
	//	scanf("%f",&r);
	//	circleArea = 3.14 * r * r;
	//	printf("Area of circle is %f square meter.\n\n",circleArea);
	//}
	//if(k==2)
	//{
	//	printf("\n\"Area of Square\"\n");
	//	printf("Enter length: ");
	//	scanf("%f",&l);
	//	squareArea = l * l;
	//	printf("Area of square is %f square meter.\n\n",squareArea);
	//}
	//if(k==3)
	//{
	//	printf("\n\"Area of Triangle\"\n");
	//	printf("Enter base: ");
	//	scanf("%f",&b);
	//	printf("Enter height: ");
	//	scanf("%f",&h);

	//	triangleArea = 0.5 * b * h;
	//	printf("Area of Triangle is %f square meter.\n\n",triangleArea);
	//}
	//if(k==4)
	//{
	//	printf("Exit");
	//	Sleep(500);
	//	exit(0);
	//}

	_getch();
	return 0;
}