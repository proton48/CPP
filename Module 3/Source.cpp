
#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	int opertype; //��� �������� 
	int shift; // �������� ������
	int strl; //������ ������
	int starter; // ������ ������
	do
	{
		starter = 0;// �������� ���� ������
		cout << "������� ������ ������" << endl;
		cin >> strl;
		cout << "������� �������� (1 - ����������, 2 - ������������)" << endl;
		cin >> opertype;
		cout << "������� �����" << endl;
		cin >> shift;
		char* arr = new char[strl];// ������������� �������
		cout << "������� ������ ��������" << endl;
		cin >> arr;
		int t = 0; // ���� ����� ������ �������� �������� ������� ASCII
		int i = 0; // ������������� ��������
		if ((opertype != 1) && (opertype != 2))
		{
			cout << "������������ ����� ��������" << endl;
		}

		switch (opertype)
		{
		case 1: // ����������
			for (i = 0; i < strl; ++i)
			{
				t = arr[i]; // ����� �������� � ��� int
				if ((t > 96) && (t < 123)) //������������� ����, ���� �������� �����
				{
					t += shift; //��������� �������� ������
					if (t > 122)// ���������� ������������ ������
					{
						t = 97 + (t - 123);
					}
					arr[i] = t; // ����������� �������� ������� ������������ �������� t
				}
				else if ((t > 64) && (t < 91)) //������������� ����, ���� ��������� �����
				{
					t += shift; //��������� �����
					if (t > 90) // ����������� �����
					{
						t = 65 + (t - 91);
					}
					arr[i] = t;// ����������� �������� ������� ������������ �������� t
				}

			}

			cout << "���������: " << arr << endl;

			break;

		case 2: // ������������

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

			cout << "���������: " << arr << endl;

			break;
		}
		cout << "����������� ��� ���? (1 - ��, 2 - ���) " << endl;
		cin >> starter;
	} while (starter == 1);
	return 0;
}
