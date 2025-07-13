#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include <iostream>
#include <string>
#include "Account.h"

class CheckingAccount : public Account {
  friend std::ostream& operator<<(std::ostream& os, const CheckingAccount& account);
  private:
    static constexpr const char *default_name = "Unnamed Checking Account";
    static constexpr double default_fee = 1.50;
  protected:
    double fee_;
  public:
    CheckingAccount(std::string name = default_name,
                    double balance = default_balance,
                    double fee = default_fee);
    bool withdraw(double amount);
};
#endif
