#include "headers.h"


int main()
{
	setlocale(LC_ALL, "");
	Snack* bounty = new Snack("Bounty");
	Snack* snickers = new Snack("Snickers");
	SnackSlot* slot = new SnackSlot(10/*количество батончиков, которые помещаются в слот*/);
	slot->addSnack(bounty); //Добавляем батончик в слот
	slot->addSnack(snickers); //еще один батончик

	VendingMachine* machine = new VendingMachine(3 /*Количество слотов для снеков*/);
	machine->addSlot(slot);
	cout << machine->getEmptySlotsCount();// вернет количество слотов
	machine->showGoods();//доп функция, демонстрирует все доступные снэки в автомате

	delete slot;
	delete snickers;
	delete bounty;
	delete machine;

	return 0;
}