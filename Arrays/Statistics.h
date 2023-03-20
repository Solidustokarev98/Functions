#pragma once
#include"stdafx.h"
#include"constants.h"
//Возвращает сумму элементов массива
	//Одномерные массивы
template<typename T>
T Sum(T arr[], const int n);
//Двумерные массивы
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает среднее-арифметическое элементов массива
	//Одномерные массивы
template<typename T>
double Avg(T arr[], const int n);
//Двумерные массивы
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает минимальное значение из массива
	//Одномерные массивы
template<typename T>
T minValueIn(T arr[], const int n);
//Двумерные массивы
template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает максимальное значение из массива
	//Одномерные массивы
template<typename T>
T maxValueIn(T arr[], const int n);
//Двумерные массивы
template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);