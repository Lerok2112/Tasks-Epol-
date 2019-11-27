#include <iostream>
#include <string>
using namespace std;
int main() {
	int n = 9, count = 0;
	string *mas = new string[n];
	char numbers[10];
	cout << "Input string:" << endl;
	cin >> numbers;
	cout << "Input array of strings:" << endl;
	for (int i = 0; i < n; i++) {
		cin >> mas[i];
		if (numbers[i] == '1') count++;
	}
	if (count != 0) {
		string *new_mas = new string[count];
		for (int i = 0, j = 0; i < n; i++) {
			if (numbers[i] == '1') {
				new_mas[j] = mas[i];
				j++;
			}
		}
		for (int i = 0; i < count; i++) {
			cout << new_mas[i] << " ";
		}
		delete[] mas;
		delete[] new_mas;
	}
	else cout << "String input error!" << endl;
	return 0;
}
