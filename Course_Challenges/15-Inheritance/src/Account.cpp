#include "Account.h"

Account::Account(std::string name, double balance)
  : name_{name}, balance_{balance} {
}

bool Account::deposit(double amount) {
  if (amount < 0) {
    return false;
  }
  else {
    balance_ += amount;
    return true;
  }
}

bool Account::withdraw(double amount) {
  if (amount > balance_) {
    return false;
  }
  else {
    balance_ -= amount;
  }
}

std::ostream& operator<<(std::ostream& os, const Account& account) {
  os << "[Account: " << account.name_ << ": " << account.balance_ << "]";
  return os;
}