//������� ���211
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

	cout << "����� ������� ������������� ��������� ����� �� �����:\n";
	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	cout << "����� ��������� �������: " << Sum(arr, n) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(arr, n) << endl;
	cout << "����������� �������� � �������: " << minValueIn(arr, n) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	cout << "������� ���������� �������: "; cin >> number_of_shift;
	cout << "����� ������� ������������� ��������� ����� �����:\n";
	shiftLeft(arr, n, number_of_shift);
	cout << "����� ������� ������������� ��������� ����� ������:\n";
	shiftRight(arr, n, number_of_shift);
	UniqueRand(arr, n);
	cout << "������������� ��������:\n";
	Search(arr, n);
	cout << endl;
	const int SIZE = 8;
	double brr[SIZE];

	cout << "����� ������� ��������� ����� ������� �������� �� �����:\n";
	FillRand(brr, SIZE, minRand, maxRand);
	Print(brr, SIZE);
	cout << "����� ��������� �������: " << Sum(brr, SIZE) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(brr, SIZE) << endl;
	cout << "����������� �������� � �������: " << minValueIn(brr, SIZE) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	cout << "����� ������� ��������� ����� ������� �������� �����:\n";
	shiftLeft(brr, SIZE, number_of_shift);
	cout << "����� ������� ��������� ����� ������� �������� ������:\n";
	shiftRight(brr, SIZE, number_of_shift);
	UniqueRand(brr, SIZE);
	Search(brr, SIZE);
	cout << endl;

	const int m = 7;
	char crr[m];

	cout << "����� ������� �� �������� �� �����:\n";
	FillRand(crr, m);
	Print(crr, m);
	cout << "����� ��������� �������: " << Sum(crr, m) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(crr, m) << endl;
	cout << "����������� �������� � �������: " << minValueIn(crr, m) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(crr, m) << endl;
	Sort(crr, m);
	cout << "����� ������� �� �������� �����:\n";
	shiftLeft(crr, m, number_of_shift);
	cout << "����� ������� �� �������� ������:\n";
	shiftRight(crr, m, number_of_shift);
	UniqueRand(crr, m);
	Search(crr, m);
	cout << endl;

	int i_arr2[ROWS][COLS];

	cout << "����� ���������� ������� ������������� ��������� ����� �� �����:\n";
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(i_arr2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(i_arr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(i_arr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(i_arr2, ROWS, COLS) << endl;
	Sort(i_arr2, ROWS, COLS);
	cout << "����� ���������� ������� ������������� ��������� ����� �����:\n";
	shiftLeft(i_arr2, ROWS, COLS, number_of_shift);
	cout << "����� ���������� ������� ������������� ��������� ����� ������:\n";
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
	cout << "����� ���������� ������� ��������� ����� ������� �������� �� �����:\n";
	FillRand(d_arr2, ROWS, COLS);
	Print(d_arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(d_arr2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(d_arr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(d_arr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(d_arr2, ROWS, COLS) << endl;
	Sort(d_arr2, ROWS, COLS);
	cout << "����� ���������� ������� ��������� ����� ������� �������� �����:\n";
	shiftLeft(d_arr2, ROWS, COLS, number_of_shift);
	cout << "����� ���������� ������� ��������� ����� ������� �������� ������:\n";
	shiftRight(d_arr2, ROWS, COLS, number_of_shift);
	UniqueRand(d_arr2, ROWS, COLS);
	Search(d_arr2, ROWS, COLS);
	cout << endl;

	char c_arr2[ROWS][COLS];
	cout << "����� ���������� ������� �� �������� �� �����:\n";
	FillRand(c_arr2, ROWS, COLS);
	Print(c_arr2, ROWS, COLS);
	cout << "����� ��������� �������: " << Sum(c_arr2, ROWS, COLS) << endl;
	cout << "�������-�������������� ��������� �������: " << Avg(c_arr2, ROWS, COLS) << endl;
	cout << "����������� �������� � �������: " << minValueIn(c_arr2, ROWS, COLS) << endl;
	cout << "������������ �������� � �������: " << maxValueIn(c_arr2, ROWS, COLS) << endl;
	Sort(c_arr2, ROWS, COLS);
	cout << "����� ���������� ������� �� �������� �����:\n";
	shiftLeft(c_arr2, ROWS, COLS, number_of_shift);
	cout << "����� ���������� ������� �� �������� ������:\n";
	shiftRight(c_arr2, ROWS, COLS, number_of_shift);
	UniqueRand(c_arr2, ROWS, COLS);
	Search(c_arr2, ROWS, COLS);
}