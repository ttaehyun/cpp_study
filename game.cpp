#include <iostream>
using namespace std;

int main() {
	int answer = 59;
	int guess;
	int tries = 0;

	do {
		cout << "정답을 추측: ";
		cin >> guess;
		tries++;
		if (guess > answer)
			cout << "제시한 정수가 높습니다.\n";
		if (guess < answer)
			cout << "제시한 정수가 낮습니다.\n";
	} while (guess != answer);

	cout << "축하. 시도 횟수= " << tries << endl;
	return 0;
}