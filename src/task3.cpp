#include <string.h>
int isPalindrome(char * str)//�������, ����������� str (����� ���� 0, ���� 1)
{
	int a = strlen(str) - 1;
	char *begin;
	char *end;
	begin = &str[0];
	end = &str[a];
	for (int i = 0; i < a / 2; i++)
		if (*begin != *end)
			return 0;
		else
		{
			*begin++;
			*end--;
		}
	return 1;
}