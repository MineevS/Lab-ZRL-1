#include <iostream>
#include <fstream>

using namespace std;

int main(int argc,char* argv[])
{
	setlocale(LC_ALL, "RUS");
	
	int size=3;//Статемент числа элементов в одномерных массивах. (В двух мерных массивах число возводится в степень n мерности пространства.
	int array1[size]; //Одномерный статический массив.

	int *array2=new int [size];//Одномерный динамический массив.
	
	int array3[size][size]; //Двумерный статический массив.

	int **array4=new int* [size]; //Двумерный динамический массив.
		for(int i=0;i<size;i++){
			array4[i]=new int [size];
		}
	
	cout << "Одномерный статический массив" << endl;
	
	ofstream fout1;
	fout.open(text1.txt);
	fout << "Одномерный статический массив" << "endl"
	
	for(int i=0;i<size;i++) // Условие выводит элементы массива array1 (Одномерный статический массив)
	{
		cout << "---" << &array1[i] << '\n';
		
		fout << "---" << &array1[i] << endl;
		
	}
	cout << endl;
	
	cout << "Одномерный динамический массив" << endl;
	
	for(int i=0;i<size;i++) // Условие выводит элементы массива array2 (Одномерный динамический массив)
	{
		cout << "---" << &array2[i] << '\n';
	}
	cout << endl;
	
	delete [] array2;
	
	cout << "Двумерный статический массив" << endl;
	
	for(int i=0; i<size; i++) // Условие выводит элементы массива array3 (Двумерный статический массив)
	{
		for(int j=0; j<size; j++){
			cout << "---" << &array3[i][j] << endl;
		}
	}
	cout << endl;
	
	cout << "Двумерный динамический массив" << endl;
	
	for(int i=0; i<size; i++) // Условие выводит элементы массива array4 (Двумерный динамический массив)
	{
		for(int j=0; j<size; j++){
			cout << "---" <<  &array4[i][j] << endl;
		}
	}
	cout << endl;
	
  //cout << "Одномерный статический массив " << "Двумерный статический массив" << "Одномерный динамический массив" << "Двумерный динамический массив" << endl;
	
	for(int i=0;i<10;i++) // Условие удаляет элементы массива array4
	{
		delete [] array4[i];
	}
	
	delete [] array4;
	
	return 0;
}