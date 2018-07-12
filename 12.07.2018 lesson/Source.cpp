#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include <Windows.h>
#include <iostream>
#include <iomanip> 

using namespace std;

int main()
{
	srand(time(NULL));

	setlocale(LC_ALL, "Rus");

	int tn = 0;

start:

	cout << "Задача № ";
	cin >> tn;

	switch (tn)
	{
	case 1:
	{
		const int n = 20;
		int a[n];
		int size;

		double sum = 0;
		int i, pass;
		int border;

		cout << "введите количество элементов массива: ";
		cin >> size;
		for (i = 0; i < size; i++)
		{
			a[i] = -20 + rand() % 50;
			cout << a[i] << " ";
		}
		cout << endl;

		for (i = 0; i < n; i++)
			sum = sum + a[i];
		cout << "average = " << sum / n << endl;

		if (sum / n > 0)
		{
			border = n - n / 3;
			cout << "border = " << border << endl;
			for (pass = 1; pass < border; pass++)
			{
				i = pass;
				while ((a[i] < a[i - 1]) && i > 0)
				{
					swap(a[i], a[i - 1]);
					i--;
				}
			}
		}
		else
		{
			border = n / 3;
			for (pass = 1; pass < border; pass++)
			{
				i = pass;
				while ((a[i] < a[i - 1]) && i > 0)
				{
					swap(a[i], a[i - 1]);
					i--;
				}
			}
		}

		int center = n - (n - border) / 2;
		int k;
		for (i = border, k = n - 1; i < center; i++, k--)
			swap(a[i], a[k]);

		cout << "sorted part: ";
		for (i = 0; i < border; i++)
			cout << a[i] << " ";
		cout << "reverse order part: ";
		for (i = border; i<n; i++)
			cout << a[i] << " ";

		cout << endl << endl;
	}
	break;
	case 2:
	{

	}
	break;
	case 3:
	{

	}
	break;
	case 4:
	{

	}
	break;
	case 5:
	{

	}
	break;
	case 6:
	{

	}
	break;
	case 7:
	{

	}
	break;
	case 8:
	{

	}
	break;
	case 9:
	{

	}
	break;
	case 10:
	{

	}
	break;
	default:
		cout << "нет такой задачи" << endl << endl;
	}
	goto start;

	system("pause");
	return 0;
}