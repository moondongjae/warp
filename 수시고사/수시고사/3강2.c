/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)

{
	int yb;
	int mb;


	printf("������ �Է��Ͻÿ�(���� ����): ");
	scanf("%d", &yb);

	mb = yb / 12;

	printf("�����ɾ�(���� ����)��:  %d�Դϴ�", mb);



	return 0;

}
*/

/*
int main(void)
{

	int age;
	double height;

	printf("���̿� Ű�� �Է��Ͻÿ�: ");
	scanf("%d%lf", &age, &height);
	printf("���̴� %d��, Ű�� %0.1lfcm�Դϴ�\n", age, height);

	return 0;
}
*/

//������ �̸��� �Է¹ް� �л��� ������ ����ϴ� �ڵ带 �ۼ��Ͻÿ�, �̶� ������ char�� �̿��Ͻÿ�

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("������ �Է��Ͻÿ�: ");
	scanf("%c", &grade);

	printf("�̸��� �Է��Ͻÿ�: ");
	scanf("%s", name);

	printf("%s �� ������ %c�Դϴ�", name, grade);



	return 0;
}

*/

//����ڰ� ������ �Է��ϸ� �� ���ɾ��� ����ϴ� ���α׷��� �ۼ��غ���.
//������ �Է��Ͻÿ�(���� ����): 5000
//�����ɾ�(���� ����): 416



//����ڷκ��� ���� �������� �Է¹ް� �� ���� ������ ���� ����, ȭ�鿡 ����Ѵ�.
//�������� �Է��Ͻÿ�: 10.0 ���� ����: 314.000000

/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	float radius;
	float area;

	printf("���� �������� �Է��Ͻÿ�: ");
	scanf("%f", &radius);

	area = 3.14 * radius * radius;
	printf("���� ����: %f\n", area);


		return 0;

}
*/

//����ڰ� �Է��ϴ� ��ȭ�� �޷�ȭ�� ����Ͽ� ����ϴ� ���α׷��� �ۼ��Ͽ� ����
//ȯ���� �Է��Ͻÿ�: 1060 ��ȭ �ݾ��� �Է��Ͻÿ�: 1000000 ��ȭ 1000000���� 9433.962264�޷��Դϴ�

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//int main(void)
//{
//	double rate;
//	int original;
//	double dollar;
//
//	printf("ȯ���� �Է��Ͻÿ�: ");
//	scanf("%lf", &rate);
//
//	
//
//	printf("��ȭ �ݾ��� �Է��Ͻÿ�: ");
//    scanf("%d", &original);
//
//	dollar = original / rate;
//
//	printf("��ȭ %d���� %0.1lf�޷��Դϴ�.\n", original, dollar);
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
//	printf("�����ϴ� ���� : ");
//	scanf(" %s", fruit);
//
//	printf("�� �� : ");
//	scanf(" %d", &cnt);
//
//	printf(" % s�� % d�� �帳�ϴ�.", fruit, cnt);
//
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//
//
//int main(void)
//{
//	char ch;  // ���� �ϳ��� ������ ����
//
//	// ����ڿ��� ���� �Է��� ��û
//	printf("���� �Է�: ");
//	scanf("%c", &ch);  // ���ڸ� �Է¹޾� ch�� ����
//
//	// �Էµ� ������ �ƽ�Ű �ڵ� ���� ���
//	printf("�Էµ� ���� '%c'�� �ƽ�Ű �ڵ� ��: %d\n", ch, ch);
//
//	return 0;
//}
