// Lapushkin1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "Lapushkin3.h"
#include "Lapushkin2.h"
#include <iostream>
#include "fstream"
#include "string"
#include <vector>

// нужно ли столько инклюдов?
using namespace std;

int menue() // еще красивое меню и чтобы после очистки и принт прога не вылетала.
{
	cout << "1- add /n 2-print /n 3-store /n 4- load /n 5-clear /n 0-exit ";
	int n;
	cin >> n;
	return n;
}

void start()
{
	Lapushkin3 g;
	while (1)
	{
		switch (menue())
		{
		case 1: 
			{
			g.add(new Lapushkin2); // не знал, что так можно
			break;
			}
		case 2:
		{
			g.print();
			break;
		}
		case 3:
		{
			g.store();
			break;
		}
		case 4:
		{
			g.load();
			break;
		}
		case 5:
		{
			g.clear(); 
			break;
		}
		case 0:
		{
			return;
		}
		}
	}
}

int main()
{
	start();
    return 0;
}

