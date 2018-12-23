/*
�������� ���������, ����������� ������ ���������� �����. �����
������ � ������ H, ������� �������� �������������. � �����
������ ������� ����� ������ ���������� ���������� �� �������
L = gt^2/2, ��� g = 9.81 m/c
��������� ����� ����������� ��� � ������� � ������� �� �������� 
������� �������� ������ ��� ������������ ����� h.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "task1.h"
#include <time.h>

int main()
{
	int startHeight = -1;
	int currTime = 0;
	int scanf_result = 0;
	do {
		printf("Enter the height: ");
		scanf_result = scanf("%d", &startHeight);
		printf("\n");
		clear_stdin();
	} while (!scanf_result || startHeight < 0);


	clock_t now;

	while (height(currTime, startHeight) >= 0)
	{
		printf("t = %02d s.\t""h = %6.1f m.\n", currTime, height(currTime++, startHeight));
		now = clock();
		while (clock() <= now + CLOCKS_PER_SEC);
	}

	printf("BABAH!!! \n\n");



	float height(int currTime, int startHeight);
	return 0;
}