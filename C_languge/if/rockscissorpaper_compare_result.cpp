#include <stdio.h>
#include <windows.h>

int main()
{
	int me, com;
	do 
	{	
		printf("============================================================\n");
		printf("              rock is 0, scissor is 1, paper is 2\n");
		printf("============================================================\n");
		printf("put the result: ");
		scanf("%d %d", &me, &com);
	
		if (me==0&&com==2)
			printf("you are lose!");
		else if (me<com||me==2&&com==0)
			printf("you are win!\n");
		else if (me>com)
			printf("you are lose!\n");
		else if (me==com)
			printf("same!\n");
		else
			printf("worng put\n");
			
		Sleep(2000);
		system("cls");
	} while (1);
}
