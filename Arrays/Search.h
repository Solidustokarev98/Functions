#pragma once
#include"stdafx.h"
#include"constants.h"
//находит в массиве повтор€юшиес€ значени€, выводит их на экран,и выводит на экран количество повторений
	//ќдномерные массивы
template<typename T>
void Search(T arr[], const int n);
//ƒвумерные массивы
template<typename T>
void Search(T arr[ROWS][COLS], const int ROWS, const int COLS);