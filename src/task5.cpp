#include "task5.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char * password(char * line)
{
	
	int a = 0, b = 0, c = 0, d = 0;
	for (int i = 0; i < 9; i++)	//���� ���� ������� 1 ������
	{
		int a = rand() % 3;
		if (a == 0)
			line[i] = (char)(rand() % 10 + 48);   // �����
		if (a == 1)
			line[i] = (char)(rand() % 26 + 65);   // ����� ��� ������
		if (a == 2)
			line[i] = (char)(rand() % 26 + 97);   // ����� ��� ������
		if (i == 8)
			line[8] = '\0';						// ����� ������

		if (i == 8)
		{
			for (int i = 0; i < 9; i++)	//��������� ������
			{
				if ((line[i] >= (char)(48) && line[i] <= (char)(57))) // ���� �� � ������ �����!
				{
					a = 1;
				}
				if ((line[i] >= (char)(65) && line[i] <= (char)(90))) // ���� �� � ������ ��������� �����!
				{
					b = 1;
				}
				if ((line[i] >= (char)(97) && line[i] <= (char)(122))) // ���� �� � ������ �������� �����!
				{
					c = 1;
				}
				if (i == 8)
				{

					if (a&&b&&c == 1) // �������� �� ��� �������
					{
						return line;
						a = b = c = 0;
					}
					else // ���� �������� �� ������ ��������� ���-�� �������
					{
						i = 0;
						a = b = c = 0;
					}
				}
			}
		}
	}
}