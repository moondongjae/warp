//���� �Ǻ���ġ

//#include <iostream>
//using namespace std;
//
//int fibona(int n)
//{
//	int a = 0, b = 1, temp;
//
//	if (n==0)
//	{
//		return 0;
//
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		temp = a + b;
//		a = b;
//		b = temp;
//
//	}
//
//	return b;
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	cout << fibona(n) << endl;
//	return 0;
//}

//����Լ�

//#include <iostream>
//using namespace std;
//
//int fibona(int n)
//{
//	if (n == 0) return 0;
//	if (n == 1) return 1;
//
//	return fibona(n - 1) + fibona(n - 2);
//}
//
//int main()
//{
//	int n;
//	cout << "��� °�� �˰�ͳ���????: ";
//	cin >> n;
//	cout << n << "��° �Ǻ���ġ ��: " <<  fibona(n)  <<endl; 
//	return 0;
//}