/*
   �������� ���������, ������� ������� �� ����� 10 �������, ���������������
   ��������� ������� �� ��������� ���� � ����, ������ ����� ������ ����
   ��� � ������, ��� � � ������� ���������. ����� ������ - 8 ��������.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include "task5.h"

const int N = 10, pass_length = 8;		//n - ���������� �������

int main()
{
	char line[N] = { 0 };
	for (int i = 1; i <= N; i++)
	{
		puts(password(line));
		printf("\n");
	}
	return 0;
}