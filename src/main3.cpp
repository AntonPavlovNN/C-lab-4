/*�������� ���������, ������� ����������� ������ � ����������, �� ��������
�� ������ �����������(��������� �������� � ����� ������� � ������ ������)*/

#define _CRT_SECURE_NO_WARNINGS
#include "task3.h"

int main() {
	char str[CHARS] = { NULL };

	//************************Enter str***************************
	printf("Enter sentense (max %d letters):\n", CHARS);
	for (int i = 0; i < CHARS; i++) {
		str[i] = getchar();
		if (str[i] == '\n') {
			str[i] = '\0';
			break;
		}
	}
	
	isPalindrome(str) ? printf("\nIt's palindrom") : printf("\nIt's not palindrom");
	return 0;
}