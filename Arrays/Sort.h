#pragma once
#include"stdafx.h"
#include"constants.h"

//Сортирует массив
	//Одномерные массивы
template<typename T>
void Sort(T arr[], const int n);
	//Двумерные массивы
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);