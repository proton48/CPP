#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Snack
{
private:
	string name;				//им€ снэка
public:
	Snack(string imya);			//конструктор дл€ добавлени€ снэка
	Snack();					//конструктор по умолчанию
	~Snack();					//деструктор
	string getName();			//геттер дл€ получени€ имени снека.

};

class SnackSlot					//класс контейнер дл€ хранени€ снеков
{
private:
	Snack *snack;				//снэки
	short qty;					//количество €чеек в слоте
	bool isadd;					//флаг, добавлен ли данный слот в вендинговую машину.
public:
	SnackSlot();				//конструктор по умолчанию
	SnackSlot(int x);			//конструктор с указанием количества снеков
	~SnackSlot();				//деструктор
	void addSnack(Snack *sn);	//функци€ добавлеи€ снэка в слот
	void showSlot();			//фнукци€ вывода на консоль €чеек в слоте и отражени€ продуктов в них
	bool getisadd();			//геттер, возвращает значение флага добавлени€ слота в машину
	void setisadd(bool val);	//сеттер, мен€ет флаг добавлени€ слота в машину
};

class VendingMachine				//класс дл€ вендинг машины
{
private:
	int qty;						//количество слотов в машине.
	vector <SnackSlot> snackslot;	// пришлось использовать вектор, столкнулс€ со сложност€ми при использовании массива классов, потому воспользовалс€ вектором.
public:
	VendingMachine(int x);			//конструктор с указанием числа слотов
	void addSlot(SnackSlot *sl);	//функци€ добавлени€ слота в вендинговую машину
	void removeSlot();				//функци€ удалени€ слота из машины (работает кор€во, если грузить несколько слотов)
	int getEmptySlotsCount();		//функци€ - возвращает целое число, количество свободных мест под слоты в машине
	void showGoods();				//функци€ выводит на консоль товары в вендинговой машине.
};





