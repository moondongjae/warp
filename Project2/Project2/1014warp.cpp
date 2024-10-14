//백준 피보나치

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

//재귀함수

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
//	cout << "몇번 째를 알고싶나요????: ";
//	cin >> n;
//	cout << n << "번째 피보나치 수: " <<  fibona(n)  <<endl; 
//	return 0;
//}