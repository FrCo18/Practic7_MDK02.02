﻿// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
using namespace std;
#include <iostream>

int* inputArray(int* arr, int el)
{
	for (int i = 0; i < 5; i++) {
		cout << "Введите " << i << " элемент " << el << "-ого массива" << endl;
		cin >> arr[i];
	}
	return arr;
}

int midMathChislo(int* arr) {//метод нахождения среднего числа.

	int kol_poloz_chis = 0;//количество положительных числел
	int sum = 0;//сумма положительных чисел
	for (int i = 0; i < 5; i++) {
		if (arr[i]%2==0) {
			kol_poloz_chis++;
			sum += arr[i];
		}
	}
	int mid = sum / kol_poloz_chis;//среднее число
	return mid;
}

int main()
{
	setlocale(NULL, "rus");
    int arr[5][5];
    for (int i = 0; i < 5; i++) {
        inputArray(arr[i], i);
    }
	int mid;
	for (int i = 0; i < 5; i++) {
		mid = midMathChislo(arr[i]);
	}
	cout << "Среднее арифмиметическое положительных чисел равно:"<<mid;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
