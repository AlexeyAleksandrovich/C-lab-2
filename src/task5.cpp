#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define pass_lenght 8

char * password(char * line)
{
	int i = 0;
	int r = 0;
	while (i < pass_lenght)
	{
		r = rand() % 3;
		if ( r == 0)
			line[i] = '0' + rand() % ('9'-'0');// ������ �� 0(48) �� 9
		if (r ==1 )
			line[i] = 'A' + rand() % ('Z'-'A');// ������ �� 'A'(65) �� 'Z'
		if(r==2)
			line[i] = 'a' + rand() % ('z'-'a');// ������ �� 'a'(97) �� 'z'
		putchar(line[i]);
		i++;
	}
	return line;
}