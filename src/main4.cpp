/*   �������� ���������, ����������� ������ (��. ������ 1), �� ������������
   ������, ����������� �� ���������� �����. ��������� ������ ��������� �����
   ������������ � ����.*/

#define _CRT_SECURE_NO_WARNINGS
#include "task1.h"
#include "task4.h"

int main() {
	char str[LINES][WORDS];
	char * index[LINES];
	FILE *fp;


	puts("We use File: \"Lb4_text.txt\"");
	fp = fopen("Lb4_text.txt", "a+");											//�������� ��������� ����� � �������� ��������
	fp == NULL ? puts("Opening is failed") : puts("Opening is successful");
	
	int line = 0;
	while (fgets(str[line], WORDS, fp) != NULL) {
		index[line] = str[line];
		line++;
	}
	  	
	lineSort(index, line);														//���������� ����� � ���������� �� � ����
	printLinesToFile((const char**)index, line, fp);							//���������� ��������������� ����� � ��� �� ����
	fclose(fp) == EOF ? puts("File \"Lb4_text.txt\" is not closed") : puts("File \"Lb4_text.txt\" is closed");
	return 0;
}