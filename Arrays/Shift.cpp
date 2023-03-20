#include"Shift.h"
template<typename T>
void shiftLeft(T arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		T buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

template<typename T>
void shiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i + 1][j];
			}

		}
		arr[ROWS - 1][COLS] = buffer;
	}
}

template<typename T>
void shiftRight(T arr[], const int n, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		T buffer = arr[n - 1];
		for (int i = n - 1; i >= 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}
}

template<typename T>
void shiftRight(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shift)
{
	for (int i = 0; i < number_of_shift; i++)
	{
		T buffer = arr[0][0];
		for (int i = 0; i < ROWS; i++)
		{
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i + 1][j];
			}

		}
		arr[ROWS - 1][COLS] = buffer;
	}
}