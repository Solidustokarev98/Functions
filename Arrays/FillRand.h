#pragma once
#include"stdafx.h"
#include"constants.h"
//��������� ������ ���������� �������
	//���������� �������
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n);
//��������� �������
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

//��������� ������ ����������� ���������� ������� � �������� ���������
	//���������� �������
template<typename T>
void UniqueRand(T arr[], const int n);
	//��������� �������
template<typename T>
void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS);