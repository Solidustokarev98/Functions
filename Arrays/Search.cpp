#include"Search.h"

template<typename T>
void Search(T arr[], const int n)
{
	int pov = 0;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (arr[i] == arr[j])
			{
				cout << arr[i] << "\t";
				pov++;
			}
		}
	}
	cout << "Количество повторений: " << pov << endl;
}

template<typename T>
void Search(T arr[ROWS][COLS], const int ROWS, const int COLS)
{

}