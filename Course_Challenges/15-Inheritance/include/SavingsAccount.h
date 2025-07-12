#ifndef _SAVINGS_ACCOUNT_H
#define _SAVINGS_ACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
  friend std::ostream& operator<<(std::ostream& os, const SavingsAccount& account);
  private:
    static constexpr const char *default_name = "Unamed Savings Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest_rate = 0.0;
  protected:
    double interest_rate_;
  public:
    SavingsAccount(std::string name = default_name,
                    double balance = default_balance,
                    double interest_rate = default_interest_rate);
    bool deposit(double amount);
};
#endif