#include<iostream>
#include<string>

using namespace std;
class BankAccount {
private:
	int accountNumber;
	string owner;
	int balance;
public:
	
	
	void setBalance(int amount) {
		balance = amount;
	}
	int getBalance() {
		return balance;
	}
	void deposit(int amount) {
		balance += amount;
	}
	void withdraw(int amount) {
		balance -= amount;
	}
	void print() {
		cout << "�ܾ��� " << balance << "�Դϴ�." << endl;
	}
};

int main() {
	BankAccount account;
	account.setBalance(0);
	account.deposit(10000);
	account.print();
	account.withdraw(8000);
	account.print();

	return 0;
}
