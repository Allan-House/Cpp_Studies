#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double balance, double interest_rate)
  : Account{name, balance}, interest_rate_{interest_rate} {
}

bool SavingsAccount::deposit(double amount) {
  amount += amount * (interest_rate_ / 100);
  return Account::deposit(amount);
}

bool SavingsAccount::withdraw(double amount) {
  return Account::withdraw(amount);
}

void SavingsAccount::print(std::ostream& os) const {
  os.precision(2);
  os << std::fixed;
  os << "[Savings Account: " << name_ << ": $" << balance_ << "]";
}
