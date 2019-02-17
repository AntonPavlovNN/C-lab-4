#include "task1.h"

//*******************************************************************				//���������� ������� �����
void lineSort(char *str[], int size) {
	char * temp;
	int line, line_under, end_of_line;

	for (line = 0; line < size; line++) {
		end_of_line = strlen(str[line]);
		if (str[end_of_line] == "\n")
			str[end_of_line] = '\0';
		for (line_under = line + 1; line_under < size; line_under++)
			if (strlen(str[line]) > strlen(str[line_under]))
			{
				temp = str[line];
				str[line] = str[line_under];
				str[line_under] = temp;
			}
	}
}

//********************************************************************				//����� ��������������� �����
void printLines(const char *str[], int size) {
	for (int i = 0; i < size; i++)
		puts(str[i]);
}