#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 30
#define M 128
#include <locale>

int main()
{
	char names[N][M];
	int currentAge = 0, maxAge = 0, minAge = 256, relatives = 0;
	char *young;
	char *old;
	setlocale(LC_ALL, "Rus");
	printf("������� ����������� ����� �������������: ");
	scanf("%d", &relatives);

	for (int i = 0; i < relatives; i++)
	{
		printf("������ ���(��) ���: ");
		scanf("%s", names[i]);
		printf("������ ���(��) �������: ");
		scanf("%d", &currentAge);
		if (currentAge > maxAge)
		{
			maxAge = currentAge;
			old = names[i];
		}
		if (currentAge < minAge)
		{
			minAge = currentAge;
			young = names[i];
		}
	}
	printf("����� ������� ����������� - %s (%d years old).\n", young, minAge);
	printf("����� ������� ����������� - %s (%d years old).\n", old, maxAge);
	return 0;
}