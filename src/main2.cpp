/*�������� ���������, ������� � ������� ������� ���������� ������� �����
   ������ � �������� �������. ������:
   "���� ����� ���� �����" -> "����� ���� ����� ����"*/

#include <stdio.h>
#include "task2.h"

int main()
{
	char in[256];
	char out[256];
	printf("Enter a string:  ");
	fgets(in, 256, stdin);
	reverseWords(in, out);
	printf("%s", out);
	return 0;
}