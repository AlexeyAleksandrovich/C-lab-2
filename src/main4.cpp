#define _CRT_SECURE_NO_WARNINGS
#include <locale>
#include <stdio.h>
#include "task4.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	char line[100];
	printf("������� ������:\n");
	scanf("%s", line);
	printf("%s", process(line));

	return 0;

}