#include <iostream>
using namespace std;

int main() {
	int vowel = 0, consonant = 0;
	char ch;

	cout << "�����ڸ� �Է��ϰ� ��Ʈ�� z�� ġ����" << endl;
	while (cin >> ch) {
		switch (ch) {
		case 'a':
		case 'i':
		case 'e':
		case 'o':
		case 'u':
			vowel++;
			break;
		default:
			consonant++;
			break;
		}
	}

	cout << "����: " << vowel << endl;
	cout << "����: " << consonant << endl;

	return 0;
}