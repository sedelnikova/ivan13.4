// Дан массив A размера N. Вывести его элементы в следующем порядке: A1, AN , A2, AN−1, A3, AN−2.....

#include <iostream>
#include <stdio.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");

	int N, i, f;
	cout << "Введите, пожалуйста, кол-во элементов массива (N > 2): ";
	cin >> N;
	int* arr = new int[N];

	cout << "Введите, пожалуйста, массив: ";
	for (i = 1; i <= N; i++)
	{
		cin >> arr[i];
	}
	f = N / 2;
	for (i = 1; i <= f; i++)
	{
		cout << arr[i] << " " << arr[N - i + 1] << " ";

	}
	if (N % 2 != 0)
	{
		cout << arr[f + 1] << " ";
	}
	return 0;
}