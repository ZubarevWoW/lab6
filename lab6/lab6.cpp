#include <iostream>
#include <string>

using namespace std;

void max()
{
	double a, b, c;
	cout << "Первое число - ";
	cin >> a;
	cout << "Второе число - ";
	cin >> b;
	cout << "Третье число - ";
	cin >> c;
	if (a > b && a > c)
	{
		cout << a << " - число a больше";
	}
	else if (b > a && b > c)
	{
		cout << b << " - число b больше";
	}
	else (c > a && c > b); {
		cout << c << " - число c больше";
	}
}
void menu(int& a, int& b, int& c) {
    int d = 0; //для выбора варианта второго меню
    while (d != 4) { // цикл для запуска выбора
        cout << "1 - Ввод верхнего предела " << endl;
        cout << " Число - " << a << endl; // вывод существующего числа
        cout << "2 - Ввод нижнего предела " << endl;
        cout << " Число - " << b << endl; // вывод существующего числа
        cout << "3 - Изменить число " << endl;
        cout << " Число - " << c << endl; // вывод существующего числа
        cout << "4 - Выйти " << endl;
        cout << "Выберите действие ";
        cin >> d;
        switch (d) {
        case(1):
            cout << "Изменить "; // изменение верхнего предела
            cin >> a;
            cout << endl;
            break;
        case(2):
            cout << "Изменить "; // изменение нижнего предела
            cin >> b;
            cout << endl;
            break;
        case(3):
            cout << "Изменить входящее число на - "; // изменение числа
            cin >> c;
            cout << endl;
            break;
        }
        if (d == 4) exit;
    }
}

void vvod(int& a, int& b) { //функция ввода числа
    int c;
    cout << "Введи входящее число" << endl;
    cin >> c;
    while (true) { // истина
        if (a < c && c < b) {
            cout << "Число входит в интервал" << endl;
            break;
        }
        else (false); // ложь
        {
            menu(a, b, c);
        }
    }
}
void Sort(int arr[], int n) //функция сортировки
{
    int a, b, c;
    for (a = 1; a < n; a++)
    {
        b = arr[a];
        c = a - 1;

        // перемещение ключей которые больше b на одну позицию вперед их текущего положения
        while (c >= 0 && arr[c] > b)
        {
            arr[c + 1] = arr[c];
            c = c - 1;
        }
        arr[c + 1] = b;
    }
}

void vvod1(int arr[], int n) // функция ввода
{
    int a;
    for (a = 0; a < n; a++)
        cout << arr[a] << " ";
    cout << endl;
}



int main()
{
	setlocale(LC_ALL, "RU");
	cout << "Задача 1" << endl;
	max();
	cout << endl;
    cout << "Задача 3" << endl;
    int n;
    cout << "Количество элементов ";
    cin >> n;
    int* arr = new int[n];
    for (int i = 0; i < n; i++)
    {
        cout << i + 1 << "-ый элемент ";
        cin >> arr[i];
    }
    Sort(arr, n);
    vvod1(arr, n);
    cout << "Задача 2" << endl;
    int a, b;
    cout << "Меню" << endl;
    cout << "*********************************************" << endl;
    vvod(a, b);
    cout << "*********************************************" << endl;

	system("pause");
	return 0;
}
