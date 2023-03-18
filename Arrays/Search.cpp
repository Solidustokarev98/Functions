#include"Search.h"

void Search(int arr[], const int n)
{
	int pov=0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << arr[i]<<"\t";
				pov++;
			}
		}
	}
	cout <<"Количество повторений: " << pov << endl;
}

void Search(double arr[], const int n)
{

}

void Search(char arr[], const int n)
{

}

void Search(int arr[ROWS][COLS], const int ROWS, const int COLS)
{

}

void Search(double arr[ROWS][COLS], const int ROWS, const int COLS)
{

}

void Search(char arr[ROWS][COLS], const int ROWS, const int COLS)
{

}