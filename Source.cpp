//Белоушко Елизавета П43021
#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	//3. Задан массив который содержит 16 случайных целых чисел от 0 до 20. Найти количество элементов массива, которые делятся на 5 с остатком 1.

	int const n = 16;
	int arr[n];
	srand(time(0));
	for (int i = 0; i < n; i++) { arr[i] = rand() % 21; }
	for (int i = 0; i < n; i++) { cout << arr[i] << ' '; }
	cout << endl;
	int kol_vo = 0;
	for (int i = 0; i < n; i++) {
		if (arr[i] % 5 == 1) { kol_vo++; }
	}
	cout << kol_vo << endl;

	return 0;
}