/*������ �3
   �������� ���������, ������� ����������� ������ � ����������, �� ��������
�� ������ ����������� (��������� �������� � ����� ������� � ������ ������)
���������

���� ������ - ��������� ��������� ��� �������� ������������ ������ � ���� ������

������

��������� ������ �������� �� �������:

    - int isPalindrome(char * str) - �������, ����������� str (����� ���� 0, ���� 1)
    - main() - ����������� ����� ������
��������� ��� �����: task3.h,task3.cpp,main3.cpp.*/

#include <stdio.h>
#include "task3.h"


int main()
{
	char  str[N] = { 0 };
	fgets(str, N, stdin);
	isPalindrome(str);
	if (isPalindrome(str) == 0)
		printf("is polindrom");
	if (isPalindrome(str) == 1)
		printf("fgldf");
	return 0;
}

