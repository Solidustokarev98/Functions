//������� ���211
#include<iostream>
using namespace std;

void FillRand(int arr[],const int n);		//��������� ������ ���������� �������
void Print(int arr[], const int n);			//������� ������ �� �����
void Sum(int arr[], const int n);			//���������� ����� ��������� �������
void Avg(int arr[], const int n);			//���������� �������-�������������� ��������� �������
void minValueIn(int arr[], const int n);	//���������� ����������� �������� �� �������
void maxValueIn(int arr[], const int n);	//���������� ������������ �������� �� �������
void Sort(int arr[], const int n);			//��������� ������ (�������� � ���������)
//���� �������, ������� �� ���� �����������
void shiftLeft(int arr[], const int n);		//��������� ����������� ����� ������� �� �������� ����� ��������� �����
void shiftRight(int arr[], const int n);	//��������� ����������� ����� ������� �� �������� ����� ��������� ������
void UniqueRand(int arr[], const int n);	//��������� ������ ����������� ���������� ������� � �������� ���������
void Search(int arr[], const int n);		//������� � ������� ������������� ��������, ������� �� �� �����,� ������� �� ����� ���������� ����������

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
	cout <<"����� �������� �������: "<< sum << endl;;
}
void Avg(int arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += arr[i];
	}
	cout <<"������� �������������� ��������� �������: "<< sum / n << endl;
}
void minValueIn(int arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (min < arr[i]) min = arr[i];
	}
	cout << "����������� ����� �������: " << min << endl;
}
void maxValueIn(int arr[], const int n)   
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (max > arr[i]) max = arr[i];
	}
	cout << "������������ ����� �������: " << max << endl;
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
