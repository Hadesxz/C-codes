#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main()
{
	int i=0;
	int j=0;
	int k=0;

	for (i=0;i<=24;i++)
	{
		for(j=0 ;j<=60;j++)
		{
			for(k=0;k<=60;k++)
			{
				printf("%dhr :%dmin :%dsec \n",i,j,k);
				Sleep(1000);
			}
		}
	}



	_getch();
	return 0;
}