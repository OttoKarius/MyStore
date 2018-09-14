#pragma once
#include "Lapushkin2.h"
class Lapushkin3 :
	public Lapushkin2
{
		vector <Lapushkin2*> m_planes;
	public:
		Lapushkin3();
		~Lapushkin3();
		void add(Lapushkin2* pPlane);
		void clear();
		void print();
		void load();
		void store();
	};

