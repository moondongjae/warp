//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//    int score[5];
//    int i;
//    int total = 0;
//
//    for (i = 0; i < 5; i++)
//    {
//        scanf("%d", &score[i]);
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        total += score[i];
//    }
//
//    float avg = total / 5.0;
//
//    for (i = 0; i < 5; i++)
//    {
//        printf("%4d", score[i]);
//    }
//    printf("\n");
//
//    printf("��� : %.1f\n", avg);
//
//    return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int a[6] = { 1, 2, 3, 4, 5};
//	int i;
//
//	for (i = 0; i < 6; i++)
//	printf("%d", a[i]);
//
//	return 0;
//}

//#include <stdio.h>
//
//int main(void) {
//    char str[5];
//
//    str[0] = 'O';
//    str[1] = 'K';
//
//
//    printf("%s\n", str);
//
//    return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char str1[80], str2[80];
    char temp[80];

    printf("�� ���ڿ� �Է� : ");
    scanf("%s %s", str1, str2);

    printf("�ٲٱ� �� : %s, %s\n", str1, str2);

    // ���ڿ� ��ȯ
    strcpy(temp, str1);  // str1�� ������ temp�� ����
    strcpy(str1, str2);  // str2�� ������ str1�� ����
    strcpy(str2, temp);  // temp�� ������ str2�� ����

    printf("�ٲ� �� : %s, %s\n", str1, str2);

    return 0;
}
