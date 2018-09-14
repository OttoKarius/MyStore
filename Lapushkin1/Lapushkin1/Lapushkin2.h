#pragma once
class Lapushkin2
	{
	public:
		Lapushkin2();
		~Lapushkin2();
		int m_age;
		string  m_colour;
		string m_size;
		void print();
		void read();
		void store(ofstream& out);
		void load(ifstream& in);
	};

