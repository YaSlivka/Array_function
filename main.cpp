#include <iostream>

using namespace std;

int function(int* Arr, int n) {
	int min = Arr[0],
		min_next = Arr[0],
		sum = NULL;

	for (int i = 0; i < n; i++) {
		if (Arr[i] < min) {
			min_next = min;
			min = Arr[i];
		}
		else if (Arr[i] < min_next) {
			min_next = Arr[i];
		}
	}

	cout << min << "and" << min_next << endl;

	sum = min + min_next;
	return sum;
}

int main() {
	int n = 0,
		sum = NULL;

	cout << "Enter size of Array" << endl;
	cin >> n;
	int* Array = new int[n];
	//{10,20,48,-5,76,-34,34,0,54}

	cout << "Enter numbers of Array" << endl;
	for (int i = 0; i < n; i++) {
		cin >> Array[i];

	}

	sum = function(Array, n);
	cout << sum << endl;


	// FIRST TEST - Если все значения нулевые
	int sum_test1 = NULL;
	int* Arr_test1 = new int[5]{ 0,0,0,0,0 };
	sum_test1 = function(Arr_test1, 5);
	cout << "test1:" << sum_test1 << endl; // 0

	// Second TEST - Если все значения одинаковые
	int sum_test2 = NULL;
	int* Arr_test2 = new int[5]{ 7,7,7,7,7 };
	sum_test2 = function(Arr_test2, 5);
	cout << "test2:" << sum_test2 << endl; // 14

	//Third TEST - ручной ввод - должно получиться -3
	int sum_test3 = NULL;
	int* Arr_test3 = new int[5]{ 5,-3,7,20,0 };
	sum_test3 = function(Arr_test3, 5);
	cout << "test3:" << sum_test3 << endl;

	return 0;
}
