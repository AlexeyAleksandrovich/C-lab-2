#include <time.h>
#include <stdlib.h>
//#include <Windows.h>
#include <inttypes.h>

long long int microseconds() //���������� ������ ����������� ��������������
{
	LARGE_INTEGER t;
	QueryPerformanceCounter(&t);
	Sleep(50); //�� 50 000 ����������� ���-������ ��������� � ��������
	return t.QuadPart;
}

char * password(char * line)
{
	int i, j,buf;
	long long int t;
	for (i = 0; i < 3; i++) //������� �����
	{
		t = microseconds();
		j = 48 + t % 10;
		line[i] = char(j);
	}
	for (i = 3; i < 6; i++) //������� �����
	{
		t = microseconds();
		j = 65 + t % 26;
		line[i] = char(j);
	}
	for (i = 6; i < 8; i++) //������� ����� ������� �������
	{
		t = microseconds();
		j = 97 + t % 26;
		line[i] = char(j);
	}
	for (i = 0; i < 10; i++) //����������
	{
		t = (microseconds()/1000) % 8;
		buf = line[t];
		line[t] = line[7 - t];
		line[7 - t] = buf;
	}
	line[8] = '\0';
	return line;
}