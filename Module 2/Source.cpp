#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "");
    double a; //������ �������
    double b; //������ �������
    int oper; //����� ��������
    int i = 1; // ������� �����
    int res = 1; //���� ������� ��������� ���������� ��� ���������� � �������



    cout << "����� 1�� �����" << endl;
    cin >> a;
    cout << "������ �������� (1 - ��������, 2 - ���������, 3 - ���������, 4 - ������� 5 - ��������� 6 - ���������� � �������.)" << endl;
    cin >> oper;
    switch (oper)
    {
    case 1:

        cout << "����� 2�� ���������" << endl;
        cin >> b;
        cout << "�����: " << a + b << endl;
        break;

    case 2:
        cout << "����� ����������" << endl;
        cin >> b;
        cout << "��������: " << a - b << endl;
        break;
    case 3:
        cout << "����� ���������" << endl;
        cin >> b;
        cout << "������������: " << a * b << endl;
        break;
    case 4:
        cout << "����� ��������" << endl;
        cin >> b;
        if (b == 0)
        {
            cout << "������, ������� �� 0" << endl;
            break;
        }
        cout << "�������: " << a / b << endl;
        break;
    case 5:

        do
        {

            res *= ++i;

        } while (i < a);
        cout << "��������� ����� " << a << " " << res << endl;
        break;


    case 6:
        cout << "����� �������" << endl;
        cin >> b;
        res = a;
        for (i = 1; i < b; i++)
        {
            res *= a;
        }
        cout << a << " � ������� " << b << " ����� " << res << endl;
        break;

    default:
        cout << "������������ ���� ��������" << endl;
    }


    return 0;
}