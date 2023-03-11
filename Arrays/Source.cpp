//Токарев СБД211
#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Sort.h"
#include"Statistics.h"


//Выполняет циклический сдвиг массива на заданное число элемменто влево
	//Одномерные массивы (Реализованы)
void shiftLeft(int arr[], const int n, int number_of_shift);
void shiftLeft(double arr[], const int n, int number_of_shift);
void shiftLeft(char arr[], const int n, int number_of_shift);
	//Двумерные массивы
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS);

//Выполняет циклический сдвиг массива на заданное число элемменто вправо
	//Одномерные массивы
void shiftRight(int arr[], const int n, int number_of_shift);
void shiftRight(double arr[], const int n, int number_of_shift);
void shiftRight(char arr[], const int n, int number_of_shift);
	//Двумерные массивы
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS);


//находит в массиве повторяюшиеся значения, выводит их на экран,и выводит на экран количество повторений
	//Одномерные массивы
void Search(int arr[], const int n);
void Search(double arr[], const int n);
void Search(char arr[], const int n);
	//Двумерные массивы
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	int minRand = 200;
	int maxRand = 300;
	int number_of_shift;

	FillRand(arr, n,minRand,maxRand);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	minValueIn(arr, n);
	Sort(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shift;
	shiftLeft(arr, n, number_of_shift);
	shiftRight(arr, n, number_of_shift);
	UniqueRand(arr, n);
	Search(arr, n);

	const int SIZE = 8;
	double brr[SIZE];

	FillRand(brr, SIZE, minRand, maxRand);
	Print(brr, SIZE);
	Sum(brr, SIZE);
	Avg(brr, SIZE);
	minValueIn(brr, SIZE);
	minValueIn(brr, SIZE);
	Sort(brr, SIZE);
	shiftLeft(brr, SIZE, number_of_shift);
	shiftRight(brr, SIZE, number_of_shift);
	UniqueRand(brr, SIZE);
	Search(brr, SIZE);

	const int m = 7;
	char crr[m];

	FillRand(crr, m);
	Print(crr, m);
	Sum(crr, m);
	Avg(crr, m);
	minValueIn(crr, m);
	minValueIn(crr, m);
	Sort(crr, m);
	shiftLeft(crr, m, number_of_shift);
	shiftRight(crr, m, number_of_shift);
	UniqueRand(crr, m);
	Search(crr, m);
	
	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	Sum(i_arr2, ROWS, COLS);
	Avg(i_arr2, ROWS, COLS);
	minValueIn(i_arr2, ROWS, COLS);
	minValueIn(i_arr2, ROWS, COLS);
	Sort(i_arr2, ROWS, COLS);
	shiftLeft(i_arr2, ROWS, COLS);
	shiftRight(i_arr2, ROWS, COLS);
	UniqueRand(i_arr2, ROWS, COLS);
	Search(i_arr2, ROWS, COLS);

	double d_arr2[ROWS][COLS]=
	{
		{2.5, 3.14, 4.2},
		{7.8,5.1, 2.7},
		{1.1, 2.3, 4.7}
	};
	FillRand(d_arr2, ROWS, COLS);
	Print(d_arr2, ROWS, COLS);
	Sum(d_arr2, ROWS, COLS);
	Avg(d_arr2, ROWS, COLS);
	minValueIn(d_arr2, ROWS, COLS);
	minValueIn(d_arr2, ROWS, COLS);
	Sort(d_arr2, ROWS, COLS);
	shiftLeft(d_arr2, ROWS, COLS);
	shiftRight(d_arr2, ROWS, COLS);
	UniqueRand(d_arr2, ROWS, COLS);
	Search(d_arr2, ROWS, COLS);

	char c_arr2[ROWS][COLS];
	FillRand(c_arr2, ROWS, COLS);
	Print(c_arr2, ROWS, COLS);
	Sum(c_arr2, ROWS, COLS);
	Avg(c_arr2, ROWS, COLS);
	minValueIn(c_arr2, ROWS, COLS);
	minValueIn(c_arr2, ROWS, COLS);
	Sort(c_arr2, ROWS, COLS);
	shiftLeft(c_arr2, ROWS, COLS);
	shiftRight(c_arr2, ROWS, COLS);
	UniqueRand(c_arr2, ROWS, COLS);
	Search(c_arr2, ROWS, COLS);
}



void shiftLeft(int arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);
}

void shiftLeft(double arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);
}

void shiftLeft(char arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		char buffer = (double)arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);
}

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);
}

void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		double buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);
}

void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		char buffer = (double)arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
	Print(arr, n);
}

void shiftRight(int arr[], const int n, int number_of_shift)
{

}

void shiftRight(double arr[], const int n, int number_of_shift)
{

}

void shiftRight(char arr[], const int n, int number_of_shift)
{

}

void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{

}

void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{

}

void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{

}


void Search(int arr[], const int n)
{

}

void Search(double arr[], const int n)
{

}

void Search(char arr[], const int n)
{

}