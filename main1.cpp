#include <iostream>
#include <fstream>

using namespace std;

int stat; // Глобальная переменная

int main()
{
    int avt; // Локальная(автоматическая) переменная
	
	char *dem= new char; // Динамическая переменная

    cout << "Global" << " - " << &stat << endl; //Глобальная
    cout << "Local" << " -  " << &avt << endl; //Локальная
	cout << "Dynamic" << " - " << (void*)dem << endl; //Динамическая
	
	ofstream fout;
	fout.open("text1.txt");
	
	fout << "Глобыльная - " << &stat << endl << "Локальная - " << &avt << endl << "Динамическая - " << (void*)dem << endl;

	delete dem;	
    return 0;
}