#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task2.h"
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "Rus");
	int value, secret;
	value = 0;
	secret = 29;

	printf("������ ����� �� 1 �� 100! \n");
	scanf("%d", &value);

	while (value != secret)
	{

		if (turn(value, secret) == 1)
		{
			printf("������ �����������! \n");
			scanf("%d", &value);
		}
		if (turn(value, secret) == -1)
		{
			printf("������ �����������! \n");
			scanf("%d", &value);
		}
	}
	printf("������! \n");

	return 0;
}