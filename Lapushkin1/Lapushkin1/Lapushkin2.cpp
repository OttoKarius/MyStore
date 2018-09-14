

#include "stdafx.h"
#include "Lapushkin2.h"
#include <iostream>
#include "fstream"
#include "string"
// как добавл€ть функцию через меню?

using namespace std;

Lapushkin2::Lapushkin2()
	:m_age(0)  // как объ€вл€ть более 1 переменной?
{
}

Lapushkin2::~Lapushkin2()
{
}

void  Lapushkin2::print()
{
	cout << m_age << "   " << m_colour << "   " << m_size << endl;
}
void Lapushkin2::read()
{
	cin >> m_age;
	cin >> m_colour;
	cin >> m_size;
}
void Lapushkin2::store(ofstream& out)
{
	out << m_age << endl;
	out << m_colour << endl;
	out << m_size << endl;

}
void Lapushkin2::load(ifstream& in)
{
	in >> m_age;
	in >> m_colour;
	in >> m_size;
}