#include "Task2.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <iostream>

int main()
{
	setlocale(LC_ALL, "rus");
	int value=0, secret=0, count = 0;
	srand(time(0));
	secret = rand() % 100;
	printf("��������� ����� �� 0 �� 100 \n");
	while (value != secret)
	{
		int result = scanf("%d", &value);
		if (result == 0)
		{
			printf("Uncorrect Value! Game over!");
			return 1;
		}
		if (value < secret)
			printf("%d ������ ����� ��������� ����������! ���������� ��� ���!\n", value);
		if(value>secret)
			printf("%d ������ ����� ��������� ����������! ���������� ��� ���!\n", value);
		count++;
	}
	printf("�����������!�� �������� ����� �� %d �������!", count);
	return 0;
}