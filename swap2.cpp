#include<iostream>
using namespace std;

void swap(int *x, int *y);

int main() {
	int a = 100, b = 200;
	cout << "swap() 호출 전: a = " << a << ", b = " << b << endl;
	swap(&a, &b);
	cout << "swap() 호출 후: a = " << a << ", b = " << b << endl;
	return 0;
}

void swap(int *x, int *y) {
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}