#include "task6.h"
#include <stdio.h>

char * clear(char * line)
{
	int count = 0;
	int size = 0;
	//������ ����� ������
	for (int i = 0; i < BUFF; i++)
	{
		size++;
		if (line[i] == '\0')
			i = BUFF;
	}



	for (int i = 0; i < size - count; i++)
	{
		if (i == 0 && line[i] == GOAL) //�������� ������ ��������� ������
		{
			count++;
			for (int j = 0; j < size - count; j++)
			{
				line[j] = line[j + 1];
				//i = -1; //��������� � ������ ������
			}
		}
		//�������� ������������� ��������� ������
		if ((line[i] == GOAL && line[i + 1] == GOAL)/*|| (line[i] == GOAL && line[i + 1] == GOAL)*/)
		{
			count++;
			for (int j = i; j < size - count; j++)
			{
				line[j] = line[j + 1];
				i = i-1; //��������� � ������ ������
			}
		}
		//�������� ���������� �������� �������
		if (line[i] == GOAL && line[i + 1] == '\0')
		{
			count++;
			line[i] = '\0';
			i = i-1;  //��������� � ������ ������
		}
	}
	return line;
}