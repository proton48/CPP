#include <iostream>
#include "calculate.h"

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	double a; //первый операнд
	double b; //второй операнд
	char oper; //тип операции 
	char starter = 'Y'; //флаг перезапуска устанавливаем Y
	do
	{
		cout << "Введи 1ое число" << endl;
		cin >> a;
		cout << "Выбери операцию ('+' - сложение, '-' - вычитание, '*' - умножение, '/' - деление '!' - факториал '^' - возведение в степень.)" << endl;
		cin >> oper;
		switch (oper)
		{
		case '+': //сложение
			cout << "Введи второе слагаемое" << endl;
			cin >> b;
			cout << "результат " << a << " " << oper << " " << b << " = " << SRDM(a, b, oper) << endl;
			break;
		case '-': //вычитание
			cout << "Введи вычитаемое" << endl;
			cin >> b;
			cout << "результат " << a << " " << oper << " " << b << " = " << SRDM(a, b, oper) << endl;
			break;
		case '/': //деление
			cout << "Введи делитель" << endl;
			cin >> b;
			if (b == 0)
			{
				cout << "недопустимый делитель = 0" << endl;
				break;
			}
			cout << "результат " << a << " " << oper << " " << b << " = " << SRDM(a, b, oper) << endl;
			break;
		case '*': //умножение
			cout << "Введи второй множитель" << endl;
			cin >> b;
			cout << "результат " << a << " " << oper << " " << b << " = " << SRDM(a, b, oper) << endl;
			break;
		case '!': //факториал
			cout << "факториал числа " << a << " " << oper << " = " << Factorial(a) << endl;
			break;
		case '^': //степень
			cout << "Введи степень" << endl;
			cin >> b;
			cout << "результат " << a << " " << oper << " " << b << " = " << Stepeny(a, b) << endl;
			break;
		default:
			cout << "Неправильный выбор оператора" << endl;
		}
		cout << "Попробуем еще раз? Y or N?" << endl;
		cin >> starter;

	} while (starter == 'Y' || starter == 'y');

return 0;
}

