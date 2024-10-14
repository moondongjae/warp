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

	printf("두개의 정수를 입력하시오: ");
	scanf("%d %d", &a, &b);

	printf("두 수중에 가장 큰 수는 %d입니다.\n", get_max(a, b));

	return 0;
}
