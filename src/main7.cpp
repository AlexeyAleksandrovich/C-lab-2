#pragma warning(disable:4996)
#include <stdio.h>
#define sLMax 201 // max length of string
#define CharMax 128 // �������� �������

int main()
{
	char str[sLMax], countLetter[CharMax] = { 0 };
	printf("Enter  the string (<%d): ", sLMax-1);
	fgets(str, sLMax, stdin);

	int i = 0; // ������� '\n' (����� strlen)
	for (; str[i] != '\n'; i++)
		;
	str[i] = '\0';

	printf("the string is: \"%s\"\n", str);
	
	for (int i = 0; str[i] != '\0'; i++)
	{
		countLetter[str[i]]++;
	}

	for (int i = 32; i < CharMax; i++) // �� 32 ��� ��������� �������
	{
		if (countLetter[i] != 0)
			printf("  '%c' %3d\n", i, countLetter[i]);
	}
	return 0;
}