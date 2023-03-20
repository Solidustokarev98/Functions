#pragma once
#include"stdafx.h"
#include"constants.h"
//выводит массив на экран
	//Одномерные массивы
template<typename T>
void Print(T arr[], const int n);
//Двумерные массивы
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);