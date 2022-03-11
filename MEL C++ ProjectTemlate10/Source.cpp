//Персональный шаблон проекта С++
#include <iostream>
using namespace std;

int a[10][2];

int& func(int index) {
	return a[index][1];
}

int& maxEl(int array[], int length) {
	int imax = 0;
	for (int i = 1; i < length; i++)
		if (array[i] > array[imax])
			imax = i;
	return array[imax];
}

template<typename T> void showArray(T array[], int length) {
	cout << "[";
	for (int i = 0; i < length; i++)
		cout << array[i] << ", ";
	cout << "\b\b]\n";
}

int main() {
	setlocale(LC_ALL, "Russian");
	int n;

	//Задача 2 - 3
	int z2_1[5] = { 1, 2, 3, 4, 5 };
	int z2_2[5];
	for (int i = 0; i < 5; i++)
		*(z2_2 + i) = *(z2_1 + 4 - i);
	cout << "Задача 2.\nПервый массив:\n";
	showArray(z2_1, 5);
	cout << "Второй массив:\n";
	showArray(z2_2, 5);
	cout << endl;


	/*/int arr[5] = {5, 8, 4, 5, 0};
	cout << "Изначальный массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
	cout << "Макс. = " << maxEl(arr, 5) << endl;
	maxEl(arr, 5) = 0;
	cout << "Итоговый массив:\n[";
	for (int i = 0; i < 5; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";*

	/*cout << "Ввод значений в массив:\n";
	for (int i = 0; i < 10; i++){
		cout << i << " элемент -> ";
		cin >> a[i][0];
		func(i) = a[i][0];
	}
	cout << "Итоговый массив:\n";
	for (int i = 0; i < 10; i++)
		cout << a[i][0] << "\t" << func(i) << endl;*/

	return 0;
}
