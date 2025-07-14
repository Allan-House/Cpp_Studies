#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

class CheckingAccount : public Account {
  friend std::ostream& operator<<(std::ostream& os, const CheckingAccount& account);
  private:
    static constexpr const char *default_name = "Unnamed Checking Account";
    static constexpr double default_fee = 1.50;
  public:
    CheckingAccount(std::string name = default_name, double balance = default_balance);
    bool withdraw(double amount);
};
#endif
