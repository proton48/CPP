#include "headers.h"


int main()
{
	setlocale(LC_ALL, "");
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*���������� ����������, ������� ���������� � ����*/);
	slot->addSnack(bounty); //��������� �������� � ����
	slot->addSnack(snickers); //��� ���� ��������

	VendingMachine* machine = new VendingMachine(3 /*���������� ������ ��� ������*/);
	machine->addSlot(slot);
	cout << machine->getEmptySlotsCount();// ������ ���������� ������
	machine->showGoods();//��� �������, ������������� ��� ��������� ����� � ��������

	delete slot;
	delete snickers;
	delete bounty;
	delete machine;

	return 0;
}