#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, ""); //?????????? ?????????
	int a;
	int b;
	cout << "??????? 1?? ????? a" << endl;
	cin >> a;
	cout << "??????? 2?? ????? b" << endl;
	cin >> b;
	cout << "?????????? ?????????? ?????????????? ????????:" << endl;
	cout << "???????? a + b: " << a + b << endl;
	cout << "????????? a - b: " << a - b << endl;
	cout << "??????? a / b: " << a / b << "." << (a % b * 100 / b) << endl;//????????? ??????? ????? ????? ? ????? ????? ????????? ? ??????????? ??????? ?????. ???????? ?? 2 ?????.
	cout << "????????? a * b :" << a * b << endl;
	cout << "??????? ???????? ?: " << (a & b) << endl;
	cout << "??????? ???????? ???: " << (a | b) << endl;
	cout << "??????? ???????? ??????????? ???: " << (a ^ b) << endl;


	return 0;

}