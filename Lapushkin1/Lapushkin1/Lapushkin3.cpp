#include "stdafx.h"
#include "Lapushkin3.h"
#include <iostream>
#include "fstream"
#include "string"
#include <vector>
// как добавлять функцию через меню?

using namespace std;


Lapushkin3::Lapushkin3()
{
}


Lapushkin3::~Lapushkin3()
{
	clear();
}

void Lapushkin3::add(Lapushkin2* pPlane)
{
	pPlane->read();
	m_planes.push_back(pPlane);
}

void Lapushkin3::clear()
{
	for (auto& pPlane : m_planes) // сложно (( !разобрать работу цикла.
	{
		delete pPlane;
	}
}

void Lapushkin3::print()
{
	for (auto& pPlane : m_planes)
	{
		pPlane->print();
	}
}

void Lapushkin3::load()
{
	clear();
	int n;
	ifstream in("file.txt");
	in >> n;  // что это значит?
	for (int i=0 ; i<n ; i++)
	{
		Lapushkin2* pPlane = new Lapushkin2;
		pPlane->load(in);
		m_planes.push_back(pPlane);
	}

}


void Lapushkin3::store()
{
	ofstream out("file.txt");

	for (auto& pPlane : m_planes)
	{

		pPlane->store(out);
	}

}
