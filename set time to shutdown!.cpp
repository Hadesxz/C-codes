#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
	int t,m;
	int count=0;

	printf("1.Shutdown PC\n");
	printf("2.Restart PC\n");
	printf("Choose 1,2: ");
	scanf("%d",&m);
	printf("\nSet Timer in second: ");
	scanf("%d",&t);
	while(count<=t)
	{
		system("cls");
		printf("%d sec",count);
		count++;
		Sleep(1000);
	}

	switch(m)
	{
	case 1: system("shutdown -s -t 0 -f");break;
	case 2: system("shutdown -r -t 0 -f");break;
	}

	_getch();
	return 0;
}