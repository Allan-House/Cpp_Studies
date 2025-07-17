#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double interest_rate)
  : SavingsAccount{name, balance, interest_rate}, withdrawals_this_year_{0} {
}

bool TrustAccount::deposit(double amount) {
  if (amount >= min_deposit_for_bonus) {
    amount += deposit_bonus;
  }
  return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount) {
  if (withdrawals_this_year_ >= max_annual_withdrawals) {
    return false;
  }
  if (amount > balance_ * max_withdrawal_percentage) {
    return false;
  }
  withdrawals_this_year_++;
  return Account::withdraw(amount);
}

std::ostream& operator<<(std::ostream& os, const TrustAccount& account) {
  os << "[Trust Account: " << account.name_ << " : $" << account.balance_ << ", $" << account.deposit_bonus << "]";
  return os;
}
