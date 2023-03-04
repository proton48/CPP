
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int opertype; //тип операции 
	int shift; // величина сдвига
	int strl; //длинна строки
	int starter; // флажок старта
	do
	{
		starter = 0;// обнуляем флаг старта
		cout << "Введите длинну строки" << endl;
		cin >> strl;
		cout << "Введите операцию (1 - шифрование, 2 - дешифрование)" << endl;
		cin >> opertype;
		cout << "Введите сдвиг" << endl;
		cin >> shift;
		char* arr = new char[strl];// инициализация массива
		cout << "Введите строку символов" << endl;
		cin >> arr;
		int t = 0; // сюда будем писать цифровое значение символа ASCII
		int i = 0; // инициализация счетчика
		if ((opertype != 1) && (opertype != 2))
		{
			cout << "Неправильный выбор операции" << endl;
		}

		switch (opertype)
		{
		case 1: // шифрование
			for (i = 0; i < strl; ++i)
			{
				t = arr[i]; // пишем значение в тип int
				if ((t > 96) && (t < 123)) //проваливаемся сюда, если строчные буквы
				{
					t += shift; //добавляем величину сдвига
					if (t > 122)// реализация циклического сдвига
					{
						t = 97 + (t - 123);
					}
					arr[i] = t; // присваиваем элементу массива получившееся значение t
				}
				else if ((t > 64) && (t < 91)) //проваливаемся сюда, если заглавные буквы
				{
					t += shift; //добавляем сдвиг
					if (t > 90) // циклический сдвиг
					{
						t = 65 + (t - 91);
					}
					arr[i] = t;// присваиваем элементу массива получившееся значение t
				}

			}

			cout << "Результат: " << arr << endl;

			break;

		case 2: // дешифрование

			for (i = 0; i < strl; ++i)
			{
				t = arr[i];
				if ((t > 96) && (t < 123))
				{
					t -= shift;
					if (t < 97)
					{
						t = 122 - (96 - t);
					}
					arr[i] = t;
				}
				else if ((t > 64) && (t < 91))
				{
					t -= shift;
					if (t < 65)
					{
						t = 90 - (64 - t);
					}
					arr[i] = t;
				}

			}

			cout << "Результат: " << arr << endl;

			break;
		}
		cout << "Попробовать еще раз? (1 - да, 2 - нет) " << endl;
		cin >> starter;
	} while (starter == 1);
	return 0;
}
