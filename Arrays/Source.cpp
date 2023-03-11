//Токарев СБД211
#include<iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 8;
//заполняет массив случайными числами
	//Одномерные массивы
void FillRand(int arr[], const int n, int minRand=0, int maxRand=100);		
void FillRand(double arr[], const int n, int minRand = 0, int maxRand = 100);
void FillRand(char arr[], const int n);
	//Двумерные массивы
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(double arr[ROWS][COLS], const int ROWS, const int COLS, int minRand = 0, int maxRand = 100);
void FillRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

//выводит массив на экран
	//Одномерные массивы
void Print(int arr[], const int n);			
void Print(double arr[], const int n);
void Print(char arr[], const int n);
	//Двумерные массивы
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Print(char arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает сумму элементов массива
	//Одномерные массивы
int Sum(int arr[], const int n);			
double Sum(double arr[], const int n);
char Sum(char arr[], const int n);
	//Двумерные массивы
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS);
char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает среднее-арифметическое элементов массива
	//Одномерные массивы
double Avg(int arr[], const int n);			 
double Avg(double arr[], const int n);
double Avg(char arr[], const int n);
	//Двумерные массивы
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS);
double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает минимальное значение из массива
	//Одномерные массивы
int minValueIn(int arr[], const int n);	
double minValueIn(double arr[], const int n);
char minValueIn(char arr[], const int n);
	//Двумерные массивы
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

//Возвращает максимальное значение из массива
	//Одномерные массивы
int maxValueIn(int arr[], const int n);	
double maxValueIn(double arr[], const int n);
char maxValueIn(char arr[], const int n);
	//Двумерные массивы
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS);
char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS);

//Сортирует массив
	//Одномерные массивы
void Sort(int arr[], const int n);			
void Sort(double arr[], const int n);
void Sort(char arr[], const int n);
	//Двумерные массивы (Не смог реализовать)
void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS);

//Ниже функции, которые не смог реализовать

//Выполняет циклический сдвиг массива на заданное число элемменто влево
	//Одномерные массивы
void shiftLeft(int arr[], const int n);
void shiftLeft(double arr[], const int n);
void shiftLeft(char arr[], const int n);
	//Двумерные массивы
void shiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftLeft(double arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftLeft(char arr[ROWS][COLS], const int ROWS, const int COLS);

//Выполняет циклический сдвиг массива на заданное число элемменто вправо
	//Одномерные массивы
void shiftRight(int arr[], const int n);
void shiftRight(double arr[], const int n);
void shiftRight(char arr[], const int n);
	//Двумерные массивы
void shiftRight(int arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftRight(double arr[ROWS][COLS], const int ROWS, const int COLS);
void shiftRight(char arr[ROWS][COLS], const int ROWS, const int COLS);

//заполняет массив уникальными случайными числами в заданном диапазоне
	//Одномерные массивы (Реализованы)
void UniqueRand(int arr[], const int n);
void UniqueRand(double arr[], const int n);
void UniqueRand(char arr[], const int n);
	//Двумерные массивы
void UniqueRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(double arr[ROWS][COLS], const int ROWS, const int COLS);
void UniqueRand(char arr[ROWS][COLS], const int ROWS, const int COLS);

//находит в массиве повторяюшиеся значения, выводит их на экран,и выводит на экран количество повторений
	//Одномерные массивы
void Search(int arr[], const int n);
void Search(double arr[], const int n);
void Search(char arr[], const int n);
	//Двумерные массивы
void Search(int arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(double arr[ROWS][COLS], const int ROWS, const int COLS);
void Search(char arr[ROWS][COLS], const int ROWS, const int COLS);

void main()
{
	setlocale(LC_ALL, "");

	const int n = 10;
	int arr[n];
	int minRand = 200;
	int maxRand = 300;

	FillRand(arr, n,minRand,maxRand);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	minValueIn(arr, n);
	Sort(arr, n);
	shiftLeft(arr, n);
	shiftRight(arr, n);
	UniqueRand(arr, n);
	Search(arr, n);

	const int SIZE = 8;
	double brr[SIZE];

	FillRand(brr, SIZE, minRand, maxRand);
	Print(brr, SIZE);
	Sum(brr, SIZE);
	Avg(brr, SIZE);
	minValueIn(brr, SIZE);
	minValueIn(brr, SIZE);
	Sort(brr, SIZE);
	shiftLeft(brr, SIZE);
	shiftRight(brr, SIZE);
	UniqueRand(brr, SIZE);
	Search(brr, SIZE);

	const int m = 7;
	char crr[m];

	FillRand(crr, m);
	Print(crr, m);
	Sum(crr, m);
	Avg(crr, m);
	minValueIn(crr, m);
	minValueIn(crr, m);
	Sort(crr, m);
	shiftLeft(crr, m);
	shiftRight(crr, m);
	UniqueRand(crr, m);
	Search(crr, m);
	
	int i_arr2[ROWS][COLS];
	FillRand(i_arr2, ROWS, COLS);
	Print(i_arr2, ROWS, COLS);
	Sum(i_arr2, ROWS, COLS);
	Avg(i_arr2, ROWS, COLS);
	minValueIn(i_arr2, ROWS, COLS);
	minValueIn(i_arr2, ROWS, COLS);
	Sort(i_arr2, ROWS, COLS);
	shiftLeft(i_arr2, ROWS, COLS);
	shiftRight(i_arr2, ROWS, COLS);
	UniqueRand(i_arr2, ROWS, COLS);
	Search(i_arr2, ROWS, COLS);

	double d_arr2[ROWS][COLS]=
	{
		{2.5, 3.14, 4.2},
		{7.8,5.1, 2.7},
		{1.1, 2.3, 4.7}
	};
	FillRand(d_arr2, ROWS, COLS);
	Print(d_arr2, ROWS, COLS);
	Sum(d_arr2, ROWS, COLS);
	Avg(d_arr2, ROWS, COLS);
	minValueIn(d_arr2, ROWS, COLS);
	minValueIn(d_arr2, ROWS, COLS);
	Sort(d_arr2, ROWS, COLS);
	shiftLeft(d_arr2, ROWS, COLS);
	shiftRight(d_arr2, ROWS, COLS);
	UniqueRand(d_arr2, ROWS, COLS);
	Search(d_arr2, ROWS, COLS);

	char c_arr2[ROWS][COLS];
	FillRand(c_arr2, ROWS, COLS);
	Print(c_arr2, ROWS, COLS);
	Sum(c_arr2, ROWS, COLS);
	Avg(c_arr2, ROWS, COLS);
	minValueIn(c_arr2, ROWS, COLS);
	minValueIn(c_arr2, ROWS, COLS);
	Sort(c_arr2, ROWS, COLS);
	shiftLeft(c_arr2, ROWS, COLS);
	shiftRight(c_arr2, ROWS, COLS);
	UniqueRand(c_arr2, ROWS, COLS);
	Search(c_arr2, ROWS, COLS);
}
void FillRand(int arr[], const int n, int minRand, int maxRand)
{	
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand()%(maxRand-minRand)+minRand;
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
			arr[i][j] = double(rand() % (maxRand - minRand) + minRand)/100;
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

void Print(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout<<arr[i]<<"\t";
	}
	cout << endl;
}

void Print(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

void Print(int arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Print(double arr[ROWS][COLS], const int ROWS, const int COLS)
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

void Print(char arr[ROWS][COLS], const int ROWS, const int COLS)
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

int Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i];
	}
	cout <<"Сумма элеметов массива: "<< sum << endl;
}

double Sum(double arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элеметов массива: " << sum << endl;
}

char Sum(char arr[], const int n)
{
	double sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += (double)arr[i];
	}
	cout << "Сумма элеметов массива: " << (char)sum << endl;
}

int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum+=arr[i][j];
		}		
	}
	cout <<"Сумма элеметов массива: "<< sum << endl;
}

double Sum(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += arr[i][j];
		}
	}
	cout << "Сумма элеметов массива: " << sum << endl;
}

char Sum(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += (double)arr[i][j];
		}
	}
	cout << "Сумма элеметов массива: " << (char)sum << endl;
}

double Avg(int arr[], const int n)
{
	return Sum(arr, n) / n;
}

double Avg(double arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}

double Avg(char arr[], const int n)
{
	return (char)((double)Sum(arr, n) / n);
}

double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return Sum(arr, ROWS, COLS) /(ROWS*COLS);
}

double Avg(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS * COLS);
}

double Avg(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (char)((double)Sum(arr, ROWS, COLS) / (ROWS * COLS));
}

int minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min < arr[i]) min = arr[i];
	}
	cout << "Минимальное число массива: " << min << endl;
}

double minValueIn(double arr[], const int n)
{
	double min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min < arr[i]) min = arr[i];
	}
	cout << "Минимальное число массива: " << min << endl;
}

char minValueIn(char arr[], const int n)
{
	double min = (double)arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min < (double)arr[i]) min = (double)arr[i];
	}
	cout << "Минимальное число массива: " << (char)min << endl;
}

int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; i++)
		{
			if (min < arr[i][j]) min = arr[i][j];
		}		
	}
	cout << "Минимальное число массива: " << min << endl;
}

double minValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; i++)
		{
			if (min < arr[i][j]) min = arr[i][j];
		}
		
	}
	cout << "Минимальное число массива: " << min << endl;
}

char minValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double min = (double)arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; i++)
		{
			if (min < (double)arr[i][j]) min = (double)arr[i][j];
		}		
	}
	cout << "Минимальное число массива: " << (char)min << endl;
}

int maxValueIn(int arr[], const int n)   
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max > arr[i]) max = arr[i];
	}
	cout << "Максимальное число массива: " << max << endl;
}

double maxValueIn(double arr[], const int n)
{
	double max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max > arr[i]) max = arr[i];
	}
	cout << "Максимальное число массива: " << max << endl;
}

char maxValueIn(char arr[], const int n)
{
	double max = (double)arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max > (double)arr[i]) max = (double)arr[i];
	}
	cout << "Минимальное число массива: " << (char)max << endl;
}

int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; i++)
		{
			if (max > arr[i][j]) max = arr[i][j];
		}		
	}
	cout << "Максимальное число массива: " << max << endl;
}

double maxValueIn(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; i++)
		{
			if (max > arr[i][j]) max = arr[i][j];
		}		
	}
	cout << "Максимальное число массива: " << max << endl;
}


char maxValueIn(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	double max = (double)arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; i++)
		{
			if (max > (double)arr[i][j]) max = (double)arr[i][j];
		}		
	}
	cout << "Минимальное число массива: " << (char)max << endl;
}

void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i+1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(double arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				double buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void Sort(char arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				char buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

void shiftLeft(int arr[], const int n)
{

}

void shiftRight(int arr[], const int n)
{

}

void UniqueRand(int arr[], const int n)
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

void UniqueRand(double arr[], const int n)
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

void UniqueRand(char arr[], const int n)
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

void Search(int arr[], const int n)
{

}

