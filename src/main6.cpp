#include <stdio.h>
#include <string.h>
#include "task6.h"
#define N 256

int main()
{
	char line[N];

	printf("Enter a string\n");
	fgets(line, N, stdin);

	if (line[strlen(line) - 1] == '\n')  //��������� ���� ������������� ������ \n, ������ ��� �� '\0'
		line[strlen(line) - 1] = '\0';

	clear(line);
	

	return 0;
}