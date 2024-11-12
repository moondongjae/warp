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
//    printf("평균 : %.1f\n", avg);
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

    printf("두 문자열 입력 : ");
    scanf("%s %s", str1, str2);

    printf("바꾸기 전 : %s, %s\n", str1, str2);

    // 문자열 교환
    strcpy(temp, str1);  // str1의 내용을 temp에 복사
    strcpy(str1, str2);  // str2의 내용을 str1에 복사
    strcpy(str2, temp);  // temp의 내용을 str2에 복사

    printf("바꾼 후 : %s, %s\n", str1, str2);

    return 0;
}
