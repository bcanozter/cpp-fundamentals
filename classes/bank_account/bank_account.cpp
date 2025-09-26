#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
  string accountNumber;
  double balance;

public:
  BankAccount(string accNum, double initialBalance)
      : accountNumber(accNum), balance(initialBalance) {}

  void deposit(double amount) {
    if (amount > 0) {
      balance += amount;
    }
  }

  bool withdraw(double amount) {
    if (amount > 0 && amount <= balance) {
      balance -= amount;
      return true;
    }
    return false;
  }

  double getBalance() const { return balance; }
  string getAccountNumber() const { return accountNumber; }
};

int main(void) {

  BankAccount account("12345", 1000.0);
  cout << "Bank Account Num: " << account.getAccountNumber()
       << " and Balance: $" << account.getBalance() << endl;
  account.deposit(500.0);
  cout << "Deposit $500: $" << account.getBalance() << endl;
  cout << "Withdraw $200" << endl;
  account.withdraw(200.0);
  cout << "Balance: $" << account.getBalance() << endl;
  return 0;
}