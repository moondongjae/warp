/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int yb;
	int mb;


	printf("연봉을 입력하시오(단위 만원): ");
	scanf("%d", &yb);

	mb = yb / 12;

	printf("월수령액(단위 만원)은:  %d입니다", mb);



	return 0;

}
*/

/*
int main(void)
{

	int age;
	double height;

	printf("나이와 키를 입력하시오: ");
	scanf("%d%lf", &age, &height);
	printf("나이는 %d살, 키는 %0.1lfcm입니다\n", age, height);

	return 0;
}
*/

//학점과 이름을 입력받고 학생의 학점을 출력하는 코드를 작성하시오, 이때 학점은 char을 이용하시오

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("학점을 입력하시오: ");
	scanf("%c", &grade);

	printf("이름을 입력하시오: ");
	scanf("%s", name);

	printf("%s 의 학점은 %c입니다", name, grade);



	return 0;
}

*/

//사용자가 연봉을 입력하면 월 수령액을 계산하는 프로그램을 작성해보자.
//연봉을 입력하시오(단위 만원): 5000
//월수령액(단위 만원): 416



//사용자로부터 원의 반지름을 입력받고 이 원의 면적을 구한 다음, 화면에 출력한다.
//반지름을 입력하시오: 10.0 원의 면적: 314.000000

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float radius;
	float area;

	printf("원의 반지름을 입력하시오: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;
	printf("원의 면적: %f\n", area);


		return 0;

}
*/

//사용자가 입력하는 원화를 달러화로 계산하여 출력하는 프로그램은 작성하여 보자
//환율을 입력하시오: 1060 원화 금액을 입력하시오: 1000000 원화 1000000원은 9433.962264달러입니다

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	double rate;
//	int original;
//	double dollar;
//
//	printf("환율을 입력하시오: ");
//	scanf("%lf", &rate);
//
//	
//
//	printf("원화 금액을 입력하시오: ");
//    scanf("%d", &original);
//
//	dollar = original / rate;
//
//	printf("원화 %d원은 %0.1lf달러입니다.\n", original, dollar);
//
//
//
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	char fruit[20];
//	int cnt;
//
//	printf("좋아하는 과일 : ");
//	scanf(" %s", fruit);
//
//	printf("몇 개 : ");
//	scanf(" %d", &cnt);
//
//	printf(" % s를 % d개 드립니다.", fruit, cnt);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main(void)
//{
//	char ch;  // 문자 하나를 저장할 변수
//
//	// 사용자에게 문자 입력을 요청
//	printf("문자 입력: ");
//	scanf("%c", &ch);  // 문자를 입력받아 ch에 저장
//
//	// 입력된 문자의 아스키 코드 값을 출력
//	printf("입력된 문자 '%c'의 아스키 코드 값: %d\n", ch, ch);
//
//	return 0;
//}
