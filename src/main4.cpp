#include <stdio.h>
#include <time.h>
#include "task4.h"

int main()
{
	srand(time(NULL));
	char  line[BUFF] = {0};
	for (int i = 0; i < BUFF; i++)
	{
		int a = rand() % 3;
		if (a == 0)
			line[i] = (char)(rand() % 10 + 48); // �����
		if (a == 1)
			line[i] = (char)(rand() % 26 + 65); // ����� ��� ������
		if (a == 2)
			line[i] = (char)(rand() % 26 + 97); // ����� ��� ������
		line[BUFF - 100] = '\0';				     // ����� ������
		line[BUFF - 1] = '\0';				     // ����� ������
	}
	printf("%s", line);
	printf("\n\n");
	printf("%s", process(line));
	printf("\n\n");
	return 0;
}
