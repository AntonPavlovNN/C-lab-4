#include <string.h>

int isPalindrome(char * str) 
{
	int len = 0;

	if (strlen(str) % 2 == 0) // ������� �������� ������
		len = strlen(str) / 2;
	else
		len = (strlen(str) - 1) / 2;

	for (int i = 0; i < len; i++) // ���������, �������� �� ������ �����������
	{
		if (*(str + i) == *(str + (strlen(str)-1)- i))
			continue;
		else 
			return 0;
	}
	return 1;
}