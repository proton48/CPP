#pragma once
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Snack
{
private:
	string name;				//��� �����
public:
	Snack(string imya);			//����������� ��� ���������� �����
	Snack();					//����������� �� ���������
	~Snack();					//����������
	string getName();			//������ ��� ��������� ����� �����.

};

class SnackSlot					//����� ��������� ��� �������� ������
{
private:
	Snack *snack;				//�����
	short qty;					//���������� ����� � �����
	bool isadd;					//����, �������� �� ������ ���� � ����������� ������.
public:
	SnackSlot();				//����������� �� ���������
	SnackSlot(int x);			//����������� � ��������� ���������� ������
	~SnackSlot();				//����������
	void addSnack(Snack *sn);	//������� ��������� ����� � ����
	void showSlot();			//������� ������ �� ������� ����� � ����� � ��������� ��������� � ���
	bool getisadd();			//������, ���������� �������� ����� ���������� ����� � ������
	void setisadd(bool val);	//������, ������ ���� ���������� ����� � ������
};

class VendingMachine				//����� ��� ������� ������
{
private:
	int qty;						//���������� ������ � ������.
	vector <SnackSlot> snackslot;	// �������� ������������ ������, ���������� �� ����������� ��� ������������� ������� �������, ������ �������������� ��������.
public:
	VendingMachine(int x);			//����������� � ��������� ����� ������
	void addSlot(SnackSlot *sl);	//������� ���������� ����� � ����������� ������
	void removeSlot();				//������� �������� ����� �� ������ (�������� ������, ���� ������� ��������� ������)
	int getEmptySlotsCount();		//������� - ���������� ����� �����, ���������� ��������� ���� ��� ����� � ������
	void showGoods();				//������� ������� �� ������� ������ � ����������� ������.
};





