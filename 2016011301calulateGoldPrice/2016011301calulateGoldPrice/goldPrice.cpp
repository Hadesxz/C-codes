#include<stdio.h>
#include<conio.h>

int main()
{
	float k=0;
	float p=0;
	float y=0;
	float total_k=0;
	float price1k=0;
	float totalPrice=0;

	printf("Please Enter Gold Price in 1 K: ");
	scanf("%f",&price1k);

	printf("Please Enter your gold weight in K: ");
	scanf("%f",&k);

	printf("Please Enter your gold weight in P: ");
	scanf("%f",&p);

	printf("Please Enter your gold weight in Y: ");
	scanf("%f",&y);


	total_k = k + p/16 + y/128;

	totalPrice = price1k * total_k;

	printf("Total Gold Price is %f (kyats)",totalPrice);


	_getch();
	return 0;
}