#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include <Windows.h>
#include <iostream>
#include <iomanip> 
#include<ctime>

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
		int a[3][4];
		int sum = 0;
		int sum1 = 0;
		int max_sum = INT_MIN;

		for (int i = 0; i < 3; i++)
		{
			sum1 = 0;
			int max_e = INT_MIN;
			for (int j = 0; j < 4; j++)
			{
				a[i][j] = rand() % 21;

				if (a[i][j] > max_e)
					max_e = a[i][j];

				sum += a[i][j];
				sum1 += a[i][j];
				cout << left << setw(3) << a[i][j] << " "; // выравнивание, задается размер поля set width, где 3 - это расстояние между символами, left - по левому краю
			}
			cout << "sum1 = " << sum1 << endl;
			cout << "max = " << max_e << endl;

			if (sum1 > max_sum) max_sum = sum1;
		}
		cout << "max_sum = " << max_sum << endl;
		cout << "sum = " << sum << endl;

	}
	break;
	case 2:
	{
		// Напишите программу, в которой объявляется три массива одинакового размера.
		// Первые два массива заполняются случайными числами в диапазоне от 0 до 20,
		// третий массив заполняется как поэлементная сумма элементов первых двух массивов.
		// Содержимое всех трех массивов выводиться на консоль

		int a[3][10];

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				a[i][j] = rand() % 21;

				cout << a[i][j] << " ";

			}
			cout << endl;
		}
		for (int j = 0; j < 10; j++)
		{
			a[2][j] = a[0][j] + a[1][j];
			cout << a[2][j] << " ";
		}
		cout << endl << endl;

	}
	break;
	case 3:
	{
		// Напишите программу, в которой объявляется три массива одинакового размера.
		// Первые два массива заполняются случайными числами в диапазоне от -35 до 55,
		// третий массив заполняется как поэлементное произведение элементов первых двух массивов.
		// Содержимое всех трех массивов выводиться на консоль

		int a[3][10];

		for (int i = 0; i < 2; i++)
		{
			for (int j = 0; j < 10; j++)
			{
				a[i][j] = -35 + rand() % 90;

				cout << a[i][j] << " ";

			}
			cout << endl;
		}

		for (int j = 0; j < 10; j++)
		{
			a[2][j] = a[0][j] * a[1][j];
			cout << a[2][j] << " ";
		}
		cout << endl << endl;

	}
	break;
	case 4:
	{
		// Напишите программу, в которой объявляется массив размером 5х10 и массив размером 5х5.
		// Первый массив заполняется случайными числами, в диапазоне от 0 до 50.
		// Второй массив заполняется по следующему принципу: первый элемент второго массива равен сумме первого и второго элемента первого массива,
		// второй элемент второго массива равен сумму третьего и четвертого элемента первого массива.

		int a[5][10];
		int b[5][5];
		int i = 0, j = 0;

		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 10; j++)
			{
				a[i][j] = rand() % 50;

				cout << a[i][j] << " ";

			}
			cout << endl;
		}
		cout << endl;
			
		for (i = 0; i < 5; i++)
		{
			for (j = 0; j < 5; j++)
			{
				b[i][j] = a[i][j*2] + a[i][j*2 + 1];

				cout << b[i][j] << " ";
			}
			cout << endl;
		}
	}
	break;
	case 5:
	{

		// В двухмерном массиве целых чисел посчитать сумму элементов:
		// a)	в каждой строке
		// b)	в каждом столбце
		// c)	*** одновременно по всем строкам и всем столбцам.

		int a[3][4];
		int sum = 0;
		int sum1 = 0;
		int sum2 = 0;

		for (int i = 0; i < 3; i++)
		{
			sum1 = 0;
			for (int j = 0; j < 4; j++)
			{
				a[i][j] = rand() % 21;

				sum += a[i][j];
				sum1 += a[i][j];
				cout << left << setw(3) << a[i][j] << " ";
			}
			cout << "| " << sum1 << endl;
		}
		
		cout << "----------------" << endl;

		int i = 0;
		for (int j = 0; j < 4; j++)
		{
			sum2 = 0;
			for (i = 0; i < 3; i++)
			{
				sum2 += a[i][j];
			}
			cout << left << setw(3) << sum2 << " ";
		}
		cout << " " << sum << endl << endl;
	}
	break;
	case 6:
	{
		// Создайте одномерный массив. Заполните его случайными числами и покажите на экран.
		// Пользователь выбирает количество сдвигов и положение (влево, вправо).
		// Выполнить сдвиг массива и показать на экран полученный результат. Сдвиг циклический. 
		// Например, если мы имеем следующий массив
		//	1 2 0 4 6 7 9
		//	и пользователь выбрал сдвиг на 2 разряда влево, то мы получим
		//	0 4 6 7 9 1 2

		const int n = 7;
		int a[n];
		int b[n];
		int i = 0, j = 0;
		int move;
		int direction;

		for (i = 0; i < n; i++)
		{
			a[i] = rand() % 10;
			cout << a[i] << " ";
		}
		cout << endl << endl;

		cout << "выберите количество сдвигов: ";
		cin >> move;
	/*	cout << "выберите положение (1 - влево, 2 - вправо): ";
		cin >> direction;

		if (direction == 1)
		{*/
			for (i = 0, j=abs(n-move-i); i < n; i++, j++)
			{
				b[move + i] = a[i];

				b[j] = a[i+move];
			}

			
			for (i = 0; i < n; i++)
				cout << a[i] << " ";
		
			cout << endl << endl;
		/*}
		else
		{

		}*/

	}
	break;
	case 7: // the same as previous
	{
		int k;
		cin >> k;
		const int n = 6;

		int a[n] = { 1, 2, 3, 4, 5, 6 };
		int b[n];

		for (int i = 0; i < n; i++)
		{
			if (i + k < n)
				b[i + k] = a[i];
			else
				b[abs(n - k - i)] = a[i];
		}

		for (int i = 0; i < n; i++)
			cout << b[i] << " ";

		cout << endl << endl;

	}
	break;
	case 8:
	{
		const int n = 10;
		int a[n][n];

		int i, j, p, k;
		cin >> k;
		cout << endl;

		for (int p = 0; p < 2; p++)
		{
			for (i = 0; i < k; i++)
			{
				for (j = 0; j < k; j++)
				{
					a[i][j] = i + 1;
					cout << a[i][j] << " ";
				}

				cout << endl;
			}
		}
		

		
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