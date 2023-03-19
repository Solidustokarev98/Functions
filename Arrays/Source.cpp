//Токарев СБД211
#include<iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 8;
//заполняет массив случайными числами
	//Одномерные массивы
void FillRand(int arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n);
//Двумерные массивы
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

//выводит массив на экран
	//Одномерные массивы
template<typename T>
void Print(T arr[], const int n);
	//Двумерные массивы
template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает сумму элементов массива
	//Одномерные массивы
template<typename T>
T Sum(T arr[], const int n);
	//Двумерные массивы
template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает среднее-арифметическое элементов массива
	//Одномерные массивы
template<typename T>
double Avg(T arr[], const int n);
	//Двумерные массивы
template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает минимальное значение из массива
	//Одномерные массивы
template<typename T>
T minValueIn(T arr[], const int n);
	//Двумерные массивы
template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает максимальное значение из массива
	//Одномерные массивы
template<typename T>
T maxValueIn(T arr[], const int n);
	//Двумерные массивы
template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

//Сортирует массив
	//Одномерные массивы
template<typename T>
void Sort(T arr[], const int n);
	//Двумерные массивы
template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);

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

//заполняет массив уникальными случайными числами в заданном диапазоне
	//Одномерные массивы
template<typename T>
void UniqueRand(T arr[], const int n);
//Двумерные массивы
template<typename T>
void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS);

//находит в массиве повторяюшиеся значения, выводит их на экран,и выводит на экран количество повторений
	//Одномерные массивы
template<typename T>
void Search(T arr[], const int n);
//Двумерные массивы
template<typename T>
void Search(T arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	int minRand = 200;
	int maxRand = 300;
	int number_of_shift;

	cout << "Вывод массива целочисленных случайных чисел на экран:\n";
	FillRand(arr, n, minRand, maxRand);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shift;
	cout << "Сдвиг массива целочисленных случайных чисел влево:\n";
	shiftLeft(arr, n, number_of_shift);
	cout << "Сдвиг массива целочисленных случайных чисел вправо:\n";
	shiftRight(arr, n, number_of_shift);
	UniqueRand(arr, n);
	cout << "Повторяющиеся значения:\n";
	Search(arr, n);
	cout << endl;
	const int SIZE = 8;
	double brr[SIZE];

	cout << "Вывод массива случайных чисел двойной точности на экран:\n";
	FillRand(brr, SIZE, minRand, maxRand);
	Print(brr, SIZE);
	cout << "Сумма элементов массива: " << Sum(brr, SIZE) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(brr, SIZE) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(brr, SIZE) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(brr, SIZE) << endl;
	Sort(brr, SIZE);
	cout << "Сдвиг массива случайных чисел двойной точности влево:\n";
	shiftLeft(brr, SIZE, number_of_shift);
	cout << "Сдвиг массива случайных чисел двойной точности вправо:\n";
	shiftRight(brr, SIZE, number_of_shift);
	UniqueRand(brr, SIZE);
	Search(brr, SIZE);
	cout << endl;

	const int m = 7;
	char crr[m];

	cout << "Вывод массива из символов на экран:\n";
	FillRand(crr, m);
	Print(crr, m);
	cout << "Сумма элементов массива: " << Sum(crr, m) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(crr, m) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(crr, m) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(crr, m) << endl;
	Sort(crr, m);
	cout << "Сдвиг массива из символов влево:\n";
	shiftLeft(crr, m, number_of_shift);
	cout << "Сдвиг массива из символов вправо:\n";
	shiftRight(crr, m, number_of_shift);
	UniqueRand(crr, m);
	Search(crr, m);
	cout << endl;

	int i_arr2[ROWS][COLS];

	cout << "Вывод двумерного массива целочисленных случайных чисел на экран:\n";
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(i_arr2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr2, ROWS, COLS) << endl;
	Sort(i_arr2, ROWS, COLS);
	cout << "Сдвиг двумерного массива целочисленных случайных чисел влево:\n";
	shiftLeft(i_arr2, ROWS, COLS, number_of_shift);
	cout << "Сдвиг двумерного массива целочисленных случайных чисел вправо:\n";
	shiftRight(i_arr2, ROWS, COLS, number_of_shift);
	UniqueRand(i_arr2, ROWS, COLS);
	Search(i_arr2, ROWS, COLS);
	cout << endl;

	double d_arr2[ROWS][COLS] =
	{
		{2.5, 3.14, 4.2},
		{7.8,5.1, 2.7},
		{1.1, 2.3, 4.7}
	};
	cout << "Вывод двумерного массива случайных чисел двойной точности на экран:\n";
	FillRand(d_arr2, ROWS, COLS);
	Print(d_arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(d_arr2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(d_arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(d_arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(d_arr2, ROWS, COLS) << endl;
	Sort(d_arr2, ROWS, COLS);
	cout << "Сдвиг двумерного массива случайных чисел двойной точности влево:\n";
	shiftLeft(d_arr2, ROWS, COLS, number_of_shift);
	cout << "Сдвиг двумерного массива случайных чисел двойной точности вправо:\n";
	shiftRight(d_arr2, ROWS, COLS, number_of_shift);
	UniqueRand(d_arr2, ROWS, COLS);
	Search(d_arr2, ROWS, COLS);
	cout << endl;

	char c_arr2[ROWS][COLS];
	cout << "Вывод двумерного массива из символов на экран:\n";
	FillRand(c_arr2, ROWS, COLS);
	Print(c_arr2, ROWS, COLS);
	cout << "Сумма элементов массива: " << Sum(c_arr2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(c_arr2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(c_arr2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(c_arr2, ROWS, COLS) << endl;
	Sort(c_arr2, ROWS, COLS);
	cout << "Сдвиг двумерного массива из символов влево:\n";
	shiftLeft(c_arr2, ROWS, COLS, number_of_shift);
	cout << "Сдвиг двумерного массива из символов вправо:\n";
	shiftRight(c_arr2, ROWS, COLS, number_of_shift);
	UniqueRand(c_arr2, ROWS, COLS);
	Search(c_arr2, ROWS, COLS);
}

void FillRand(int arr[], const int n, int minRand, int maxRand)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}
}

void FillRand(double arr[], const int n, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
		arr[i] /= 100;
	}
}

void FillRand(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (maxRand - minRand) + minRand;
		}

	}
}

void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand, int maxRand)
{
	minRand *= 100;
	maxRand *= 100;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = double(rand() % (maxRand - minRand) + minRand) / 100;
		}

	}
}

void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand();
		}

	}
}
template<typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template<typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template<typename T>
T Sum(T arr[], const int n)
{
	T sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	return sum;
}

template<typename T>
T Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	return sum;
}

template<typename T>
double Avg(T arr[], const int n)
{
	return Sum(arr, n) / n;
}

template<typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

template<typename T>
T minValueIn(T arr[], const int n)
{
	T min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min > arr[i]) min = arr[i];
	}
	return min;
}

template<typename T>
T minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; i++)
		{
			if (min > arr[i][j]) min = arr[i][j];
		}
	}
	return min;
}

template<typename T>
T maxValueIn(T arr[], const int n)
{
	T max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max < arr[i]) max = arr[i];
	}
	return max;
}

template<typename T>
T maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	T max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; i++)
		{
			if (max < arr[i][j]) max = arr[i][j];
		}
	}
	return max;
}

template<typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				T buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template<typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int iterations = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = 0; k < ROWS; k++)
			{
				for (int l = 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						T buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}
					iterations++;
				}
			}

		}
	}
	cout << "Массив отсортирован за " << iterations << " итераций\n";
}

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

template<typename T>
void UniqueRand(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n;
			unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}
}

template<typename T>
void UniqueRand(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			bool unique;
			do
			{
				arr[i][j] = rand() % (ROWS * COLS);
				unique = true;
				for (int k = 0; k < i; k++)
				{
					for (int l = 0; l < j; l++)
					{
						if (arr[i][j] == arr[k][l])
						{
							unique = false;
							break;
						}
					}
				}
			} while (!unique);
		}
	}
}

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