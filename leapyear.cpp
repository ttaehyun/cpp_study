#include<iostream>
using namespace std;
int main() {
	int year;
	bool result;

	cout << "������ �Է��Ͻÿ�: ";
	cin >> year;

	result = (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
	cout.setf(cout.boolalpha);
	cout << result << endl;

	return 0;
}