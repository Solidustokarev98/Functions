//Shift.h
#pragma once
#include"constants.h"
#include"stdafx.h"

//Выполняет циклический сдвиг массива на заданное число элемменто влево
	//Одномерные массивы
//void shiftLeft(int arr[], const int n, int number_of_shift);
//void shiftLeft(double arr[], const int n, int number_of_shift);
//void shiftLeft(char arr[], const int n, int number_of_shift);
//	//Двумерные массивы
//void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
//void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
//void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);

//Выполняет циклический сдвиг массива на заданное число элемменто вправо
//	//Одномерные массивы
//void shiftRight(int arr[], const int n, int number_of_shift);
//void shiftRight(double arr[], const int n, int number_of_shift);
//void shiftRight(char arr[], const int n, int number_of_shift);
//	//Двумерные массивы
//void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
//void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
//void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);

void shiftLeft(int arr[], const int n, int number_of_shift);
void shiftLeft(double arr[], const int n, int number_of_shift);
void shiftLeft(char arr[], const int n, int number_of_shift);

void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);

void shiftRight(int arr[], const int n, int number_of_shift);
void shiftRight(double arr[], const int n, int number_of_shift);
void shiftRight(char arr[], const int n, int number_of_shift);
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift);