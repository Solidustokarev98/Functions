//Токарев СБД211
#include<iostream>
using namespace std;

void FillRand(int arr[],const int n);		//заполняет массив случайными числами
void Print(int arr[], const int n);			//выводит массив на экран
void Sum(int arr[], const int n);			//Возвращает сумму элементов массива
void Avg(int arr[], const int n);			//Возвращает среднее-арифметическое элементов массива
void minValueIn(int arr[], const int n);	//Возвращает минимальное значение из массива
void maxValueIn(int arr[], const int n);	//Возвращает максимальное значение из массива
void Sort(int arr[], const int n);			//Сортирует массив (Проблемы с счетчиком)
//Ниже функции, которые не смог реализовать
void shiftLeft(int arr[], const int n);		//Выполняет циклический сдвиг массива на заданное число элемменто влево
void shiftRight(int arr[], const int n);	//Выполняет циклический сдвиг массива на заданное число элемменто вправо
void UniqueRand(int arr[], const int n);	//заполняет массив уникальными случайными числами в заданном диапазоне
void Search(int arr[], const int n);		//находит в массиве повторяюшиеся значения, выводит их на экран,и выводит на экран количество повторений

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	FillRand(arr, n);
	Print(arr, n);
	Sum(arr, n);
	Avg(arr, n);
	minValueIn(arr, n);
	minValueIn(arr, n);
	Sort(arr, n);	
}
void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand();
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
void Sum(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum+=arr[i];
	}
	cout <<"Сумма элеметов массива: "<< sum << endl;;
}
void Avg(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout <<"Среднее арифметическое элементов массива: "<< sum / n << endl;
}
void minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min < arr[i]) min = arr[i];
	}
	cout << "Минимальное число массива: " << min << endl;
}
void maxValueIn(int arr[], const int n)   
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max > arr[i]) max = arr[i];
	}
	cout << "Максимальное число массива: " << max << endl;
}
void Sort(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = j+1; j < n; j++)
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
void shiftLeft(int arr[], const int n)
{

}
void shiftRight(int arr[], const int n)
{

}
void UniqueRand(int arr[], const int n)
{

}
void Search(int arr[], const int n)
{

}

