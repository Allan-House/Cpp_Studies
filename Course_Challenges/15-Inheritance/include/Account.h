#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>

class Account {
  friend std::ostream& operator<<(std::ostream& os, const Account& account);
  private:
    static constexpr const char *default_name = "Unnamed Account";
  protected:
    static constexpr double default_balance = 0.0;
    std::string name_;
    double balance_;
  public:
    Account(std::string name = default_name, double balance = default_balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const {return balance_;}
};
#endif
