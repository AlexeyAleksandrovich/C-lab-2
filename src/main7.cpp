#include <stdio.h>
#include <string.h>
#define N 256

int main()       //������� ������������� �������� ��� ��������� ������, ���������� ������ ������ � ����� ��� ����������
{
	char str[N], arr[128] = { 0 };
	int i;

	printf("Enter a string: ");
	fgets(str, N, stdin);

	if (str[strlen(str) - 1] == '\n')  
		str[strlen(str) - 1] = '\0';

	for (i = 0; str[i] != '\0';i++)  //������� ���������� ������� �������
		arr[str[i]]++;
	

	for (i = 0; str[i] != '\0';i++)  //���� ������ ����������, �������� ��� � ���-�� ��� ����������
	{
		
		if (arr[str[i]] > 0)
		{
			printf("%c %d\n", str[i], arr[str[i]]);
			arr[str[i]] = 0;
		}
	}

	return 0;
}