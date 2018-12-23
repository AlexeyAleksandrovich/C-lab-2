#include "stdio.h"
#include "task3.h"

char * layout(char buf[], int line, int count)
{
	int stars_num = line * 2 - 1; // ���-�� ���������
	int stars_index = count - line; // ������, � �������� ���������� ������
	
	//---------------------------------------//
	for (int i = 0; i < stars_index; i++)
		buf[i] = ' ';

	for (int j = 1; j <= stars_num; j++)
		buf[stars_index++] = '*';
	//---------------------------------------//

	buf[stars_index] = '\0'; // ��� ����������� ������
	return buf;
}

void clear_stdin(void)
{
	char c;
	do {
		c = getchar();
	} while (c != '\n'  && c!= EOF);
}