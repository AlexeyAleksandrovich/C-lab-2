#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task5.h"

int main()
{	
	srand(time(0));
	char  line[9] = { 0 };
	printf("Password Generator\n");

	for (int j = 0; j < 10; j++)   // � ���� ����� ��������� 10 �������
	{
		printf("%s\n", password(line));
	}

	return 0;
}