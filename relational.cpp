#include<iostream>
using namespace std;

int main() {
	int x, y;
	bool r1, r2, r3, r4;
	cout << "ù ��° ������ �Է��Ͻÿ�: ";
	cin >> x;
	cout << "�� ��° ������ �Է��Ͻÿ�: ";
	cin >> y;

	r1 = (x == y);
	r2 = (x != y);
	r3 = (x >= y);
	r4 = (x <= y);

	cout.setf(cout.boolalpha);
	cout << r1 << endl;
	cout << r2 << endl;
	cout << r3 << endl;
	cout << r4 << endl;

	return 0;

}