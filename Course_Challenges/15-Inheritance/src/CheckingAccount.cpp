#include "CheckingAccount.h"

CheckingAccount::CheckingAccount(std::string name, double balance, double fee)
  : Account::Account{name, balance}, fee_{fee} {
}

bool CheckingAccount::withdraw(double amount) {
  if ((amount + fee_) > balance_) {
    return false;
  }
  else {
    balance_ -= (amount + fee_);
    return true;
  }
}

std::ostream& operator<<(std::ostream& os, const CheckingAccount& account) {
  os << "[Checking Account: " << account.name_ << " : $" << account.balance_ << ", $" << account.fee_ << "]";
  return os;
}
