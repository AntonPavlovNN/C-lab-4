#define _CRT_SECURE_NO_WARNINGS

#include "task1.h"
#include "task4.h"
#include <string.h>
#include <stdio.h>

int main(int argc, char * argv[])
{
	char buf[6][256];
	if (argc < 3)   // ������ ���� �� ������� ����������
	{
		printf("Wrong format\n");
		return -2;
	}

	FILE *fr = fopen(argv[1], "rt"); //��������� ���� �� ������
	if (!fr)
	{
		printf("Cannot open %s\n", argv[1]);
		return -1;
	}
	int i = 0;
	while (!feof(fr)) //������ ���� � ���������� � �����
	{
		fscanf(fr, "%s\n", buf[i]);
		i++;		
	}

	fclose(fr); //������� �����
	char * p[] = { buf[0],buf[1], buf[2], buf[3], buf[4],buf[5] };
	lineSort(p, 6); //������ ����������

	FILE *fr1 = fopen(argv[2], "wt"); //������� ���� �� ������
	if (!fr)
	{
		printf("Cannot open %s\n", argv[2]);
		return -3;
	}
	printLinesToFile((const char**)p, 6, fr1); // ���������� � ����
	fclose(fr1); //������� �����   

	return 0;
}