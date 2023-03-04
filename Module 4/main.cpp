#include <iostream>
#include "calculate.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	double a; //������ �������
	double b; //������ �������
	char oper; //��� �������� 
	char starter = 'Y'; //���� ����������� ������������� Y
	do
	{
		cout << "����� 1�� �����" << endl;
		cin >> a;
		cout << "������ �������� ('+' - ��������, '-' - ���������, '*' - ���������, '/' - ������� '!' - ��������� '^' - ���������� � �������.)" << endl;
		cin >> oper;
		switch (oper)
		{
		case '+': //��������
			cout << "����� ������ ���������" << endl;
			cin >> b;
			cout << "��������� " << a << " " << oper << " " << b << " = " << SRDM(a, b, oper) << endl;
			break;
		case '-': //���������
			cout << "����� ����������" << endl;
			cin >> b;
			cout << "��������� " << a << " " << oper << " " << b << " = " << SRDM(a, b, oper) << endl;
			break;
		case '/': //�������
			cout << "����� ��������" << endl;
			cin >> b;
			if (b == 0)
			{
				cout << "������������ �������� = 0" << endl;
				break;
			}
			cout << "��������� " << a << " " << oper << " " << b << " = " << SRDM(a, b, oper) << endl;
			break;
		case '*': //���������
			cout << "����� ������ ���������" << endl;
			cin >> b;
			cout << "��������� " << a << " " << oper << " " << b << " = " << SRDM(a, b, oper) << endl;
			break;
		case '!': //���������
			cout << "��������� ����� " << a << " " << oper << " = " << Factorial(a) << endl;
			break;
		case '^': //�������
			cout << "����� �������" << endl;
			cin >> b;
			cout << "��������� " << a << " " << oper << " " << b << " = " << Stepeny(a, b) << endl;
			break;
		default:
			cout << "������������ ����� ���������" << endl;
		}
		cout << "��������� ��� ���? Y or N?" << endl;
		cin >> starter;

	} while (starter == 'Y' || starter == 'y');

return 0;
}

