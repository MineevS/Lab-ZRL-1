#include <iostream>
#include <fstream>
using namespace std;


struct pacient1
{
	double health;   // (8) БАЙТ
	int age;         // (4) БАЙТ
	char name[5];    // (1*5) БАЙТ
	char surname[5]; // (1*5) БАЙТ
	char gender; // (1) БАЙТ
	// 5+5+4+1+8=23 БАЙТА
	//32-23=11
};

struct pacient3
{
	char name[5];    // (1*5) БАЙТ
	int age;         // (4) БАЙТ
	char surname[5]; // (1*5) БАЙТ
	double health;   // (8) БАЙТ
	char gender; // (1) БАЙТ
	
};

#pragma pack(push, 1)
struct pacient2
{
	char name[5];    // (1*5) БАЙТ
	char surname[5]; // (1*5) БАЙТ
	int age;         // (4) БАЙТ
	char gender; // (1) БАЙТ
	double health;   // (8) БАЙТ
	
	// 5+5+4+1+8=23 БАЙТА
	//32-23=11
};
#pragma pack(pop)

int main()
{
	ofstream fout;
	fout.open("Windows4.txt");
	pacient1 argument1;
	
	cout << "Выводим элементы переменной структуры pacien1.name[]" << endl;
	cout << "Размер переменной name в байтах: " << sizeof(argument1.name) << "\n" << endl;
	cout << "+ Адреса байтов переменной name: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien1.name[]" << endl;
	fout << "Размер переменной name[] в байтах: " << sizeof(argument1.name) << "\n" << endl;
	fout << "+ Адреса байтов переменной name[]: " << "\n" << endl;
	
	for(int i=0; i<sizeof(argument1.name); i++)
	{
	cout << i << "---" << (int*)&(argument1.name[i]) << endl;
	fout << i << "---" << (int*)&(argument1.name[i]) << endl;
	}
	cout << endl;
	fout << endl;
	
	cout << "Выводим элементы переменной структуры pacien1.surname[]" << endl;
	cout << "Размер переменной surname[] в байтах: " << sizeof(argument1.surname) << "\n" << endl;
	cout << "+ Адреса байтов переменной surname[]: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien1.surname[]" << endl;
	fout << "Размер переменной surname[] в байтах: " << sizeof(argument1.surname)*5 << "\n" << endl;
	fout << "+ Адреса байтов переменной surname[]: " << "\n" << endl;
	for(int i=0; i<sizeof(argument1.surname); i++)
	{
	cout << i << "---" << (int*)&(argument1.surname[i]) << endl;
	fout << i << "---" << (int*)&(argument1.surname[i]) << endl;
	}
	cout << endl;
	fout << endl;
	
	cout << "Выводим элементы переменной структуры pacien1.age" << endl;
	cout << "Размер переменной age в байтах: " << sizeof(argument1.age) << "\n" << endl;
	cout << "+ Адреса байтов переменной age: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien1.age" << endl;
	fout << "Размер переменной age в байтах: " << sizeof(argument1.age) << "\n" << endl;
	fout << "+ Адреса байтов переменной age: " << "\n" << endl;
	
	cout << "0" << "---" << &(argument1.age) << endl;
	fout << "0" << "---" << &(argument1.age) << endl;
	
	cout << "Выводим элементы переменной структуры pacien1.gender" << endl;
	cout << "Размер переменной gender в байтах: " << sizeof(argument1.gender) << "\n" << endl;
	cout << "+ Адреса байтов переменной gender: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien1.gender" << endl;
	fout << "Размер переменной gender в байтах: " << sizeof(argument1.gender) << "\n" << endl;
	fout << "+ Адреса байтов переменной gender: " << "\n" << endl;
	
	cout << "0" << "---" << (int*)&(argument1.gender) << endl;
	fout << "0" << "---" << (int*)&(argument1.gender) << endl;
	
	cout << "Выводим элементы переменной структуры pacien1.health" << endl;
	cout << "Размер переменной health в байтах: " << sizeof(argument1.health) << "\n" << endl;
	cout << "+ Адреса байтов переменной health: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien1.health" << endl;
	fout << "Размер переменной health в байтах: " << sizeof(argument1.health) << "\n" << endl;
	fout << "+ Адреса байтов переменной health: " << "\n" << endl;
	
	cout << "0" << "---" << &(argument1.health) << endl;
	fout << "0" << "---" << &(argument1.health) << endl;
	
	cout << sizeof(pacient1) << endl;
	cout <<  "---------------------------------" << endl;
	
	fout << sizeof(pacient1) << endl;
	fout <<  "---------------------------------" << endl;
//////////////////////////////////////////////////////////////////////////
	pacient2 argument2;
	
	cout << "Выводим элементы переменной структуры pacien2.name[]" << endl;
	cout << "Размер переменной name в байтах: " << sizeof(argument2.name) << "\n" << endl;
	cout << "+ Адреса байтов переменной name: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien2.name[]" << endl;
	fout << "Размер переменной name[] в байтах: " << sizeof(argument2.name) << "\n" << endl;
	fout << "+ Адреса байтов переменной name[]: " << "\n" << endl;
	
	for(int i=0; i<sizeof(argument2.name); i++)
	{
	cout << i << "---" << (int*)&(argument2.name[i]) << endl;
	fout << i << "---" << (int*)&(argument2.name[i]) << endl;
	}
	cout << endl;
	fout << endl;
	
	cout << "Выводим элементы переменной структуры pacien2.surname[]" << endl;
	cout << "Размер переменной surname[] в байтах: " << sizeof(argument2.surname) << "\n" << endl;
	cout << "+ Адреса байтов переменной surname[]: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien2.surname[]" << endl;
	fout << "Размер переменной surname[] в байтах: " << sizeof(argument2.surname) << "\n" << endl;
	fout << "+ Адреса байтов переменной surname[]: " << "\n" << endl;
	for(int i=0; i<sizeof(argument2.surname); i++)
	{
	cout << i << "---" << (int*)&(argument2.surname[i]) << endl;
	fout << i << "---" << (int*)&(argument2.surname[i]) << endl;
	}
	cout << endl;
	fout << endl;
	
	cout << "Выводим элементы переменной структуры pacien2.age" << endl;
	cout << "Размер переменной age в байтах: " << sizeof(argument2.age) << "\n" << endl;
	cout << "+ Адреса байтов переменной age: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien2.age" << endl;
	fout << "Размер переменной age в байтах: " << sizeof(argument2.age) << "\n" << endl;
	fout << "+ Адреса байтов переменной age: " << "\n" << endl;
	
	cout << "0" << "---" << &(argument2.age) << endl;
	fout << "0" << "---" << &(argument2.age) << endl;
	
	cout << "Выводим элементы переменной структуры pacien2.gender" << endl;
	cout << "Размер переменной gender в байтах: " << sizeof(argument2.gender) << "\n" << endl;
	cout << "+ Адреса байтов переменной gender: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien2.gender" << endl;
	fout << "Размер переменной gender в байтах: " << sizeof(argument2.gender) << "\n" << endl;
	fout << "+ Адреса байтов переменной gender: " << "\n" << endl;
	
	cout << "0" << "---" << (int*)&(argument2.gender) << endl;
	fout << "0" << "---" << (int*)&(argument2.gender) << endl;
	
	cout << "Выводим элементы переменной структуры pacien2.health" << endl;
	cout << "Размер переменной health в байтах: " << sizeof(argument2.health) << "\n" << endl;
	cout << "+ Адреса байтов переменной health: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien2.health" << endl;
	fout << "Размер переменной health в байтах: " << sizeof(argument2.health) << "\n" << endl;
	fout << "+ Адреса байтов переменной health: " << "\n" << endl;
	
	cout << "0" << "---" << &(argument2.health) << endl;
	fout << "0" << "---" << &(argument2.health) << endl;
	
	cout << sizeof(pacient2) << endl;
	cout <<  "---------------------------------" << endl;
	
	fout << sizeof(pacient2) << endl;
	fout <<  "---------------------------------" << endl;
//////////////////////////////////////////////////////////////////////////
	pacient3 argument3;
	
	cout << "Выводим элементы переменной структуры pacien3.name[]" << endl;
	cout << "Размер переменной name в байтах: " << sizeof(argument3.name) << "\n" << endl;
	cout << "+ Адреса байтов переменной name: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien3.name[]" << endl;
	fout << "Размер переменной name[] в байтах: " << sizeof(argument3.name) << "\n" << endl;
	fout << "+ Адреса байтов переменной name[]: " << "\n" << endl;
	
	for(int i=0; i<sizeof(argument3.name); i++)
	{
	cout << i << "---" << (int*)&(argument3.name[i]) << endl;
	fout << i << "---" << (int*)&(argument3.name[i]) << endl;
	}
	cout << endl;
	fout << endl;
	
	cout << "Выводим элементы переменной структуры pacien3.surname[]" << endl;
	cout << "Размер переменной surname[] в байтах: " << sizeof(argument3.surname) << "\n" << endl;
	cout << "+ Адреса байтов переменной surname[]: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien3.surname[]" << endl;
	fout << "Размер переменной surname[] в байтах: " << sizeof(argument3.surname) << "\n" << endl;
	fout << "+ Адреса байтов переменной surname[]: " << "\n" << endl;
	for(int i=0; i<sizeof(argument3.surname); i++)
	{
	cout << i << "---" << (int*)&(argument3.surname[i]) << endl;
	fout << i << "---" << (int*)&(argument3.surname[i]) << endl;
	}
	cout << endl;
	fout << endl;
	
	cout << "Выводим элементы переменной структуры pacien3.age" << endl;
	cout << "Размер переменной age в байтах: " << sizeof(argument3.age) << "\n" << endl;
	cout << "+ Адреса байтов переменной age: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien3.age" << endl;
	fout << "Размер переменной age в байтах: " << sizeof(argument3.age) << "\n" << endl;
	fout << "+ Адреса байтов переменной age: " << "\n" << endl;
	
	cout << "0" << "---" << &(argument3.age) << endl;
	fout << "0" << "---" << &(argument3.age) << endl;
	
	cout << "Выводим элементы переменной структуры pacien3.gender" << endl;
	cout << "Размер переменной gender в байтах: " << sizeof(argument3.gender) << "\n" << endl;
	cout << "+ Адреса байтов переменной gender: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien3.gender" << endl;
	fout << "Размер переменной gender в байтах: " << sizeof(argument3.gender) << "\n" << endl;
	fout << "+ Адреса байтов переменной gender: " << "\n" << endl;
	
	cout << "0" << "---" << (int*)&(argument3.gender) << endl;
	fout << "0" << "---" << (int*)&(argument3.gender) << endl;
	
	cout << "Выводим элементы переменной структуры pacien3.health" << endl;
	cout << "Размер переменной health в байтах: " << sizeof(argument3.health) << "\n" << endl;
	cout << "+ Адреса байтов переменной health: " << "\n" << endl;

	fout << "Выводим элементы переменной структуры pacien3.health" << endl;
	fout << "Размер переменной health в байтах: " << sizeof(argument3.health) << "\n" << endl;
	fout << "+ Адреса байтов переменной health: " << "\n" << endl;
	
	cout << "0" << "---" << &(argument3.health) << endl;
	fout << "0" << "---" << &(argument3.health) << endl;
	
	cout << sizeof(pacient3) << endl;
	cout <<  "---------------------------------" << endl;
	
	fout << sizeof(pacient3) << endl;
	fout <<  "---------------------------------" << endl;
	
	return 0;
}