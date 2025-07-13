#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(std::string name, double balance, double interest_rate)
  : Account{name, balance}, interest_rate_{interest_rate} {
}

bool SavingsAccount::deposit(double amount) {
  amount += amount * (interest_rate_ / 100);
  return Account::deposit(amount);
}

std::ostream& operator<<(std::ostream& os, const SavingsAccount& account) {
  os << "[Savings Account: " << account.name_ << " : $" << account.balance_ << ", " << account.interest_rate_ << "%]";
  return os;
}
