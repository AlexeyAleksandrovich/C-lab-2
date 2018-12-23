#include <stdio.h>
#include "task1.h"
#define G 9.81

float height(int currTime, int startHeight) // ������ ������ ��� ������ � ������� currTime (startHeight - ��������� ������)
{
	return (float)(startHeight - G * currTime * currTime / 2);              //L = gt ^ 2 / 2
}

void clear_stdin(void)
{
	char c;
	do {
		c = getchar();
	} while (c != '\n'  && c != EOF);
}