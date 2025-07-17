#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include "Account.h"

class CheckingAccount : public Account {
  private:
    static constexpr const char *default_name = "Unnamed Checking Account";
    static constexpr double default_fee = 1.50;
  public:
    CheckingAccount(std::string name = default_name, double balance = default_balance);
    virtual ~CheckingAccount() = default;
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream& os) const override;
};

#endif
