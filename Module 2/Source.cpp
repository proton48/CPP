#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double a; //первый операнд
    double b; //второй операнд
    int oper; //выбор операции
    int i = 1; // счетчик цикла
    int res = 1; //сюда запишем результат факториала или возведения в степень



    cout << "Введи 1ое число" << endl;
    cin >> a;
    cout << "Выбери операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление 5 - факториал 6 - возведение в степень.)" << endl;
    cin >> oper;
    switch (oper)
    {
    case 1:

        cout << "Введи 2ое слагаемое" << endl;
        cin >> b;
        cout << "Сумма: " << a + b << endl;
        break;

    case 2:
        cout << "Введи вычитаемое" << endl;
        cin >> b;
        cout << "Разность: " << a - b << endl;
        break;
    case 3:
        cout << "Введи множитель" << endl;
        cin >> b;
        cout << "Произведение: " << a * b << endl;
        break;
    case 4:
        cout << "Введи делитель" << endl;
        cin >> b;
        if (b == 0)
        {
            cout << "Ошибка, деление на 0" << endl;
            break;
        }
        cout << "Частное: " << a / b << endl;
        break;
    case 5:

        do
        {

            res *= ++i;

        } while (i < a);
        cout << "Факториал числа " << a << " " << res << endl;
        break;


    case 6:
        cout << "Введи степень" << endl;
        cin >> b;
        res = a;
        for (i = 1; i < b; i++)
        {
            res *= a;
        }
        cout << a << " в степени " << b << " равно " << res << endl;
        break;

    default:
        cout << "Неправильный ввод операции" << endl;
    }


    return 0;
}