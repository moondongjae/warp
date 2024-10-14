//후위증가연산자 ex) y=x++ 같은 경우 int x = 5, int y = x++ 일때 x를 y에 먼저 넣고 x를 증가시킨다. x=6 y=5

//편의점에서 물건을 구입하고 만 원을 냈을 때, 거스름돈의 액수로 점원이 지급해야 할 화폐와 동전수를 계산하는 프로그램을 작성해보자.

//x=x+y x+=y

// 태희가 신청한 전체 학점과 평점을 계산하여 신청 학점이 10학점 이상이고 평점 평균이 4.0을 넘는 경우 1을 출력하고, 
// 그렇지 않으면 0을 출력하는 프로그램을 작성하라.태희가 이전 학기에 신청한 과목당 학점과 얻은 점수는 아래와 같다.

//국어 3학점 3.8
// 영어 5학점 4.4
// 수학 4학점 3.9
//
//국어 영어 수학 전체학점 결과저장 국어평점 영어평점 수학평점 평점평균
//kor eng mat credits res kscore escore mscore grade

//#include <stdio.h>
//
//int main(void) {
//  
//    int kor = 3, eng = 5, mat = 4;  
//    double kscore = 3.8, escore = 4.4, mscore = 3.9; 
//    int credits;  
//    double grade; 
//    int res; 
//
//    credits = kor + eng + mat;
//
//    grade = (kor * kscore + eng * escore + mat * mscore) / credits;
//
//    res = (credits >= 10 && grade > 4.0) ? 1 : 0;
//
//    printf("전체 학점: %d\n", credits);
//    printf("평점 평균: %.2f\n", grade);
//    printf("결과: %d\n", res);
//
//    return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main()
//{
//
//	int n = 0;
//
//	printf("n을 입력하시오: ");
//	scanf("%d", &n);
//
//	if (n >= 80)
//	{
//		printf("large");
//	}
//
//	else if (60<n && n<80)
//	{
//		printf("small");
//	}
//	
//	else
//	{
//		printf("error");
//	}
//
// 	return 0;
//
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int chest = 95;
//char size;
//
//int main()
//{
//	printf("가슴 둘레를 입력하시오: ");
//	scanf("%d", &chest);
//
//	if (chest <= 90)
//	{
//	 size = 'S';
//	}
//	else if (chest > 90 && chest <= 100)
//	{
//		size = 'M';
//	}
//
//	else
//	{
//		size = 'L';
//	}
//
//	printf("가슴둘레: %d, 선택된 사이즈: %c\n", chest, size);
//	return 0;
//}
//

//출장을 가는데 거리가 50.5km 이하이고 시간이 2.0시
//간 미만이면 ok를 출력하고 그 이외의 경우에는
//cancel을 출력하는 프로그램을 작성하시오.거리와 시
//간은 double형 변수에 입력받는다

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//double distance;
//double time;
//
//int main(void)
//{
//	printf("출장 거리를 입력하시오: ");
//	scanf("%lf", &distance);
//
//	printf("출장 시간을 입력하시오: ");
//	scanf("%lf", &time);
//
//	if ((distance <= 50.5) && (time <= 2) )
//	{
//		printf("ok");
//	}
//
//	else
//	{
//		printf("cancle\n");
//	}
//
//	return 0;
//}


//int main()
//{
//
//
//	int number;
//	printf("정수를 입력하시오: ");
//	scanf("%d", &number);
//	switch (number)
//	{
//	case 0:
//			printf("없음\n");
//			break;
//
//	case 1:
//			printf("하나\n");
//			break;
//	default:
//		printf("많음\n");
//		break;
//	}
//}

// 월의 일수를 계산하는 프로그램
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//int main(void)
//{
//	int month, days;
//
//	printf("몇월인지 입력해봐라: ");
//	scanf("%d", &month);
//
//	if (month = 1, 3, 5, 7, 8, 10, 12)
//	{
//		printf("날짜는 31일입니다");
//	}
//
//	else if (month = 4, 6, 9, 11)
//	{
//		printf("날짜는 30일입니다");
//	}
//
//	else
//	{
//		printf("날짜는 28일입니다");
//
//	}
//
//	return 0;
//
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int month, days;
//
//int main(void)
//{
//	printf("몇월인가요?: ");
//	scanf("%d", &month);
//
//	switch (month)
//	{
//	case2:
//		days = 28;
//		break;
//
//	case 4:
//	case 6:
//	case 9:
//	case 11:
//		days = 30;
//		break;
//
//	default:
//		days = 31;
//		break;
//
//
//	}
//	printf("%d월의 일수는 % d입니다.\n", month, days);
//
//	return 0;
//
//}

// 다음 표에 따라 옷의 사이즈가 결정될 때, 나이가 25이고 가슴둘
//레가 95인 사람의 사이즈를 출력하는 프로그램을 if 문을 사용하
//여 작성하라.

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int age = 25;
//int chest = 95;
//char size;
//
//int main()
//{
//	printf("당신의 나이와 가슴둘레는 몇입니까?: ");
//	scanf("% d % d", &age, &chest);
//	
//	if (age < 20)
//	{
//		if (chest < 85)
//			size = 's';
//		else if (chest < 90)
//			size = 'm';
//		else
//			size = 'l';
//
//	}
//
//	else
//	{
//		if (chest < 90)
//			size = 's';
//		else if ( chest < 100)
//			size = 'm';
//		else
//			size = 'l';
//
//
//	}
//
//	printf("사이즈는 %c 입니다.\n", size);
//
//	return 0;
//}
//


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h> // strcpy를 사용하기 위한 헤더
//
//int main() {
//    int age;
//    int chest;
//    char size[10]; // 문자열을 저장할 배열 (예: "Small", "Medium", "Large")
//
//    printf("당신의 나이와 가슴둘레를 입력하세요 (예: 25 95): ");
//    scanf("%d %d", &age, &chest);
//
//    // 나이와 가슴둘레에 따른 사이즈 결정
//    if (age < 20) {
//        if (chest < 85) {
//            strcpy(size, "Small"); // S -> Small
//        }
//        else if (chest < 90) {
//            strcpy(size, "Medium"); // M -> Medium
//        }
//        else {
//            strcpy(size, "Large"); // L -> Large
//        }
//    }
//    else { // 20세 이상
//        if (chest < 90) {
//            strcpy(size, "Small"); // S -> Small
//        }
//        else if (chest < 100) {
//            strcpy(size, "Medium"); // M -> Medium
//        }
//        else {
//            strcpy(size, "Large"); // L -> Large
//        }
//    }
//
//    printf("사이즈는 %s 입니다.\n", size); // %s로 문자열 출력
//    return 0;
//}

//키보드로 수식을 입력하면 계산 결과를 출력하는 프로그램을 작성하시오.정수 사칙연산만 입력한다.  tip : 연산 기호(+, -, *, / )도 하나의 문자이다

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//
//
//	int a, b;
//	char op;
//	int result;
//
//	printf("수식을 입력하시오: ");
//	scanf("%d %s %d", &a, &op, &b);
//
//	switch (op)
//	{
//	case '+':
//		result = a + b;
//		break;
//
//	case '-':
//		result = a - b;
//		break;
//
//	case '/':
//		if (b != 0)
//		{
//			result = a / b;
//		}
//		
//		else
//		{
//			printf("0으로 어케 나누노.\n");
//		return 1;
//		}
//
//		break;
//
//	 default:
//		printf("지원안됨 ㅋㅋ");
//		return 1;
//	}
//
//	printf("%d %c %d = %d\n", a, op, b, result);
//
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void) {
//    int x, y;           // 두 개의 정수
//    char op;            // 연산자 ( +, -, *, / )
//    int result;         // 계산 결과를 저장할 변수
//
//    // 수식을 입력받음
//    printf("수식을 입력하세요 (예: 5 + 3): ");
//    scanf("%d %c %d", &x, &op, &y);
//
//    // 연산자에 따른 계산 수행
//    switch (op) {
//    case '+':
//        result = x + y;
//        break;
//    case '-':
//        result = x - y;
//        break;
//    case '*':
//        result = x * y;
//        break;
//    case '/':
//        if (y != 0) { // 0으로 나누는 오류 방지
//            result = x / y;
//        }
//        else {
//            printf("0으로 나눌 수 없습니다.\n");
//            return 1; // 오류 발생 시 프로그램 종료
//        }
//        break;
//    default:
//        printf("지원되지 않는 연산자입니다.\n");
//        return 1; // 잘못된 연산자가 입력되었을 때 프로그램 종료
//    }
//
//    // 결과 출력
//    printf("%d %c %d = %d\n", x, op, y, result);
//
//    return 0;
//}
