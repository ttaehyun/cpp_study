#include <iostream>
using namespace std;

int main() {
	int input, minute, second;
	const int SER_PER_MINUTE = 60;
	cout << "�ʴ����� �ð��� �Է��Ͻÿ� : (32���� ����) ";
	cin >> input;
	minute = input / SER_PER_MINUTE;
	second = input % SER_PER_MINUTE;

	cout << input << "�ʴ� " << minute << "�� " << second << "�� �Դϴ�." << endl;
	return 0;
}