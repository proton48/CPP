#include "calculate.h"
double SRDM(double a, double b, char oper)//функция для Суммы, разности, деления, умножения
{
	double result = 0;
	switch (oper)
	{
	case '+': result = a + b; break;
	case '-': result = a - b; break;
	case '*': result = a * b; break;
	case '/': result = a / b; break;
	}
	return result;
}

double Factorial(double a)
{
	if (a == 1)
	{
		return 1;
	}
	else
	{
		return a * Factorial(a - 1); //рекурсивный вызов
	}
}
double Stepeny(double a, double b)
{
	if (b == 0) // случай если степень 0
	{
		return 1;
	
	}
	else if (b == 1) // случай для первой степени
	{
		return a;
	}
	else
	{
		return a * Stepeny(a, (b - 1)); //рекурсивный вызов
	}
}
