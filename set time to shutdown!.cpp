#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int main()
{
	int t,m;

	printf("1.Shutdown PC\n");
	printf("2.Restart PC\n");
	printf("Choose 1,2: ");
	scanf("%d",&m);
	printf("\nSet Timer in second: ");
	scanf("%d",&t);
	while(t!=0)
	{
		switch(m)
		{
		case 1:	system("cls");
				printf("This PC will Shut Down in %d sec",t);
				t--;
				Sleep(1000);break;
		case 2:	system("cls");
				printf("This PC will Restart in %d sec",t);
				t--;
				Sleep(1000);
		}
	}

	switch(m)
	{
	case 1: system("shutdown -s -t 0 -f");break;
	case 2: system("shutdown -r -t 0 -f");break;
	}

	_getch();
	return 0;
}