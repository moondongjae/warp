#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int get_max(int a, int b)
{
	if (a > b)
		return(a);
	else
		return (b);

}

int main(void)
{

	int a, b;

	printf("�ΰ��� ������ �Է��Ͻÿ�: ");
	scanf("%d %d", &a, &b);

	printf("�� ���߿� ���� ū ���� %d�Դϴ�.\n", get_max(a, b));

	return 0;
}
