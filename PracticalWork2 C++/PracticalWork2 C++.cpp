
#include <iostream>
using namespace std;

int factorial(int f)
{
	if (f > 0)
	{
		return f * factorial(f - 1);
	}
	return 1;
}

void swap(int* a, int* b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

void massiveElements(int* massive, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << massive[i];
	}
}

int main()
{
	float sum = 0;
	int n, m;
	int* massive;
	int answer;
	
	setlocale(LC_ALL, "Russian");
	cout << "1) Факториал\n2) Замена значений\n3) Сумма элементов массива\n4) Вывод элементов массива\n5) Подсчёт среднего арифметического\n6) Вывод элементов массива\n7) Сумма элементов матрицы\n8) Наименьшее число";
	cin >> answer;
	switch (answer)
	{
	case 1:
		int f;
		cin >> f;
		cout << factorial(f);
		break;
	case 2:
		int a, b;
		cin >> a;
		cin >> b;
		swap(&a, &b);
		cout << a << " " << b;
		break;
	case 3:
		cout << "Введите длину массива и далее его элементы";
		cin >> n;
		massive = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> massive[i];
		}
		for (int i = 0; i < n; i++)
		{
			sum = sum + massive[i];
		}
		cout << sum;
		break;
	case 4:
		cout << "Введите длину массива и далее его элементы";
		cin >> m;
		massive = new int[m];
		for (int i = 0; i < m; i++)
		{
			cin >> massive[i];
		}
		massiveElements(massive, m);
		break;
	case 5:
		cout << "Введите длину массива и далее его элементы";
		cin >> n;
		massive = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> massive[i];
		}
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			sum = sum + massive[i];
		}
		cout << sum / n;
		break;
	case 6:
		cout << "Введите длину массива и далее его элементы";
		cin >> n;
		massive = new int[n];
		for (int i = 0; i < n; i++)
		{
			cin >> massive[i];
		}
		for (int i = 0; i < n; i++)
		{
			cout << massive[i];
		}
		break;
	case 7:
		cout << "Введите длину и ширину матрицы";
		cin >> n;
		cin >> m;
		int matrix[50][50];
		for (int i = 0; i < n; i++)
			for (int j = 0; j < m; j++)
			matrix[i][j] = rand() % 100 + 1;
		for (int i = 0; i < n; i++)
		{
			cout << "\n";
				for (int j = 0; j < m; j++)
				{
					cout << matrix[i][j];
					cout << " ";
					sum += matrix[i][j];
				}
		}
		cout << "\n" << sum;
		break;
	case 8:
		cout << "Введите длину массива";
		cin >> n;
		massive = new int[n];
		for (int i = 0; i < n; i++)
			massive[i] = rand() % 100 + 1;
		int lowestNumber = massive[0];
		for (int i = 0; i < n; i++)
			if (lowestNumber > massive[i])
				lowestNumber = massive[i];
		cout << "\n" << lowestNumber;
		break;
	}
}

