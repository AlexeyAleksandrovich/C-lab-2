int turn(int value, int secret)
{
	if (value == secret)
	{
		//cout << "�� �������!\n";
		return 0;
	}
	if (value > secret)
	{
		//cout << "��� ����� ������! ���������� ��� ���!\n";
		return 1;
	}
	if (value < secret)
	{
		//cout << "��� ����� ������! ���������� ��� ���!\n";
		return -1;
	}
}