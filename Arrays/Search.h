//Search.h
#pragma once
#include"stdafx.h"
#include"constants.h"
//находит в массиве повтор€юшиес€ значени€, выводит их на экран,и выводит на экран количество повторений
	//ќдномерные массивы
void Search(int arr[], const int n);
void Search(double arr[], const int n);
void Search(char arr[], const int n);
//ƒвумерные массивы
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS);