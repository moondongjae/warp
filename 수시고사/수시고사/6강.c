//#include <stdio.h>
//
//int main(void)
//{
//	int i = 0;
//
//	while (i < 5)
//	{
//		printf("hello\n");
//
//	}
//
//	return 0;
//}

////세균이 1시간마다 4배씩 증가한다고 가정하자. 이 세균
//10마리를 배양하면 7시간 후의 세균의 수는 얼마나 될까 ?
//역시 지수 함수나 로그 함수를 이용하지 말고 반복 구조
//만을 사용하여서 해결하여 보자.
// 종이를 한번 접으면 면적이 1 / 2로 줄어든다.종이를 몇
//번 접어야 처음으로 원래 면적의 1 / 100이하로 줄어드는
//가 ? 역시 로그 함수나 지수 함수를 사용하지 말고 반복
//구조를 이용하여서 해결하여 보자.
//
//#include <stdio.h>
//
//int main(void)
//{
//    double area = 1.0;
//        int folds = 0;
//
//    while (area > 0.01)
//    {
//        area /= 2;
//        folds++;
//    }
//
//    printf("%d번 접어야 면적이 1/100 이하로 줄어든다", folds);
//
//    return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//    int answer = 59; // 정답
//    int guess; // 사용자가 추측할 값
//    int tries = 0; // 시도 횟수
//  
//
//    do {
//        printf("100보다 작은 정답을 추측하여 보시오: ");
//        scanf("%d", &guess); // 사용자가 추측한 값을 입력받음
//        tries++; // 시도 횟수 증가
//
//        if (guess > answer) // 사용자가 입력한 값이 정답보다 높으면
//            printf("제시한 정수가 높습니다.");
//        if (guess < answer) // 사용자가 입력한 값이 정답보다 낮으면
//            printf("제시한 정수가 낮습니다.");
//    } while (guess != answer); // 사용자의 추측이 정답이 아닐 경우 계속 반복
//
//    int real_tries = tries - 2;
//  
//    printf("축하합니다. 시도횟수=%d", real_tries); // 정답을 맞춘 경우 시도 횟수 출력
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int jul, met;
//
//    // 랜덤 시드 초기화 없이 0으로 고정
//    srand(0); // 임의의 값으로 시드 설정, 같은 결과가 반복됨
//
//    // 화면을 한 번만 지웁니다. (필요한 경우)
//    system("cls");
//
//    for (jul = 1; jul <= 8; jul++) {
//        for (met = 0; met <= rand() % 80; met++) {
//            printf("ㅁ");
//        }
//        printf("\n");
//    }
//
//    return 0;
//}

////라스베가스와 같은 도박장에 가면 주사위 게임이 있다. 주사위 2개
//를 던졌을 때, 합이 6이 되는 경우를 전부 출력하여 보자.예를 들어
//서(1, 5), (2, 4), ...와 같이 출력되면 된다.



//#include <stdio.h>
//int main()
//{
//
//	printf("주사위 3개를 던져 합이 10이 되는 경우:\n");
//
//	for (int a = 1; a < 7; a++)
//	{
//
//		for (int b = 1; b < 7; b++)
//		{
//			for (int c = 1; c < 7; c++)
//			{
//				if ( a + b + c == 10)
//				{
//					printf("%d+%d+%d = 10\n", a, b, c);
//				}
//			}
//		}
//	}
//	return 0;
//}

//#include <stdio.h>
//
//int main()
//{
//	int i = 0;
//	int sum = 0;
//
//	for (i = 1; i <= 10; i++)
//	{
//		sum += i;
//		if (sum > 30)
//			break;
//
//	}
//	printf("누적값: %d\n", sum);
//	printf("마지막에 입력한 값: %d\n", i);
//
//	return 0;
//}


/*

*   *
 * *
  *
 * *
*   *
*/

//#include <stdio.h>
//
//int main() {
//    // 총 5줄을 출력
//    for (int i = 0; i < 5; i++) {
//        // 공백 출력
//        for (int j = 0; j < 5; j++) {
//            if (j == i || j == 4 - i) {
//                printf("*");
//            }
//            else {
//                printf(" ");
//            }
//        }
//        printf("\n"); // 줄 바꿈
//    }
//
//    return 0; // 프로그램 종료
//}


#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;

    printf("2 이상의 정수를 입력하세요: ");
    scanf("%d", &n);

    int count = 0;

    for (int num = 2; num <= n; num++) {
        int is_prime = 1;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                is_prime = 0;
                break;
            }
        }

        if (is_prime)
        {
            printf("%5d", num);
            count++;


            if (count % 5 == 0)
            {
                printf("\n");
            }
        }
    }
    if (count % 5 != 0)
    {
        printf("\n");
    }

    return 0;
}
