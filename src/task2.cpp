#include "task2.h"

char * reverseWords(char * in, char * out) {
	char * index[1 + CHARS / 2];
	int flag = 0, word = 0, count = 0;
	
	for (int i = 0; i < CHARS; i++) {									//����������� ���������� �� ������ ����� � ������
		if (in[i] == ' ' && flag == 1)
			flag = 0;
		if (in[i] != ' ' && flag == 0) {
			index[word++] = &in[i];
			flag = 1;
		}
	}
	
	int j = 0;
	for (int i = word-1; i >= 0; i--) {									//�������� �� ������� ���������� � ����� � ������
		for ( ; (*index[i] != '\0') && (*index[i] != ' '); j++) {		//������������ ������������ ������� � ������� 
			out[j] = *index[i]++;
		}
		out[j++] = ' ';
	}
	out[j--] = '\0';
	return out;
}