﻿// Task7.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

using namespace std;
#include <iostream>
#include <ctime>


int main()
{
	setlocale(NULL, "rus");
	int a, b;
	cin >> a;
	cin >> b;
	int proizv = a * b;
	int check_treh = proizv;
	int count = 0;
	cout << proizv/1000;
	for (int i = 0; check_treh !=0; i++)
	{
		check_treh = check_treh / 10;
		count++;
	}
	if (count==3) {
		cout << "Число трёхзначное";
	}
	else
	{
		cout << "Число не трёхзначное";
	}
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
