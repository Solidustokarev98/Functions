//Токарев СБД211
#include"stdafx.h"
#include"constants.h"
#include"FillRand.h"
#include"Print.h"
#include"Statistics.h"
#include"Sort.h"
#include"Shift.h"
#include"Search.h"

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	int minRand = 200;
	int maxRand = 300;
	int number_of_shift;

	cout << "Вывод массива целочисленных случайных чисел на экран:\n";
	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shift;
	cout << "Сдвиг массива целочисленных случайных чисел влево:\n";
	shiftLeft(arr, n, number_of_shift);
	cout << "Сдвиг массива целочисленных случайных чисел вправо:\n";
	shiftRight(arr, n, number_of_shift);
	UniqueRand(arr, n);
	cout << "Повторяющиеся значения:\n";
	Search(arr, n);
	cout << endl;
	const int SIZE = 8;
	double brr[SIZE];

	cout << "Вывод массива случайных чисел двойной точности на экран:\n";
	FillRand(brr, SIZE, minRand, maxRand);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	cout << "Сдвиг массива случайных чисел двойной точности влево:\n";
	shiftLeft(brr, SIZE, number_of_shift);
	cout << "Сдвиг массива случайных чисел двойной точности вправо:\n";
	shiftRight(brr, SIZE, number_of_shift);
	UniqueRand(brr, SIZE);
	Search(brr, SIZE);
	cout << endl;

	const int m = 7;
	char crr[m];

	cout << "Вывод массива из символов на экран:\n";
	FillRand(crr, m);
	Print(crr, m);
	cout << "Сумма элементов массива: " << Sum(crr, m) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(crr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(crr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(crr, m) << endl;
	Sort(crr, m);
	cout << "Сдвиг массива из символов влево:\n";
	shiftLeft(crr, m, number_of_shift);
	cout << "Сдвиг массива из символов вправо:\n";
	shiftRight(crr, m, number_of_shift);
	UniqueRand(crr, m);
	Search(crr, m);
	cout << endl;

	int i_arr2[ROWS][COLS];

	cout << "Вывод двумерного массива целочисленных случайных чисел на экран:\n";
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr2, ROWS, COLS) << endl;
	Sort(i_arr2, ROWS, COLS);
	cout << "Сдвиг двумерного массива целочисленных случайных чисел влево:\n";
	shiftLeft(i_arr2, ROWS, COLS, number_of_shift);
	cout << "Сдвиг двумерного массива целочисленных случайных чисел вправо:\n";
	shiftRight(i_arr2, ROWS, COLS, number_of_shift);
	UniqueRand(i_arr2, ROWS, COLS);
	Search(i_arr2, ROWS, COLS);
	cout << endl;

	double d_arr2[ROWS][COLS] =
	{
		{2.5, 3.14, 4.2},
		{7.8,5.1, 2.7},
		{1.1, 2.3, 4.7}
	};
	cout << "Вывод двумерного массива случайных чисел двойной точности на экран:\n";
	FillRand(d_arr2, ROWS, COLS);
	Print(d_arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr2, ROWS, COLS) << endl;
	Sort(d_arr2, ROWS, COLS);
	cout << "Сдвиг двумерного массива случайных чисел двойной точности влево:\n";
	shiftLeft(d_arr2, ROWS, COLS, number_of_shift);
	cout << "Сдвиг двумерного массива случайных чисел двойной точности вправо:\n";
	shiftRight(d_arr2, ROWS, COLS, number_of_shift);
	UniqueRand(d_arr2, ROWS, COLS);
	Search(d_arr2, ROWS, COLS);
	cout << endl;

	char c_arr2[ROWS][COLS];
	cout << "Вывод двумерного массива из символов на экран:\n";
	FillRand(c_arr2, ROWS, COLS);
	Print(c_arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(c_arr2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr2, ROWS, COLS) << endl;
	Sort(c_arr2, ROWS, COLS);
	cout << "Сдвиг двумерного массива из символов влево:\n";
	shiftLeft(c_arr2, ROWS, COLS, number_of_shift);
	cout << "Сдвиг двумерного массива из символов вправо:\n";
	shiftRight(c_arr2, ROWS, COLS, number_of_shift);
	UniqueRand(c_arr2, ROWS, COLS);
	Search(c_arr2, ROWS, COLS);
}