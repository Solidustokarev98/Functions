#pragma once
#include"stdafx.h"
#include"constants.h"
//Выполняет циклический сдвиг массива на заданное число элемменто влево
	//Одномерные массивы
template<typename T>
void shiftLeft(T arr[], const int n, int number_of_shift);
//Двумерные массивы
template<typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);

//Выполняет циклический сдвиг массива на заданное число элемменто вправо
	//Одномерные массивы
template<typename T>
void shiftRight(T arr[], const int n, int number_of_shift);
//Двумерные массивы
template<typename T>
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);