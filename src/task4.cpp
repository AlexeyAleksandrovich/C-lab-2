char* process(char* line)
{
	int sL = 0;
	for (; line[sL] != '\0'; sL++);

	for (int i = 0, j = sL - 1; i < j; i++, j--)
	{
		if ( ('a' <= line[i] && line[i] <= 'z') || ('A' <= line[i] && line[i] <= 'Z') ) //���� ����� 
		{
			if ( ('a' <= line[j] && line[j] <= 'z') || ('A' <= line[j] && line[j] <= 'Z') ) //���� �����
				j++;
			//if ('0' <= line[j] && line[j] <= '9') //���� �����
			//;
		}

		else if ('0' <= line[i] && line[i] <= '9')//���� �����
		{
			if ('0' <= line[j] && line[j] <= '9')//���� �����
			i--;
						
			if ( ('a' <= line[j] && line[j] <= 'z') || ('A' <= line[j] && line[j] <= 'Z') ) //���� ����� 
			{
				char temp = line[i];
				line[i] = line[j];
				line[j] = temp;
			}
		}
	}
	return line;
}