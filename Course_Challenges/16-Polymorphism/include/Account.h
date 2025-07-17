#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include <iostream>
#include <string>
#include "IPrintable.h"

class Account : public IPrintable{
  private:
    static constexpr const char *default_name = "Unnamed Account";
  protected:
    static constexpr double default_balance = 0.0;
    std::string name_;
    double balance_;
  public:
    Account(std::string name = default_name, double balance = default_balance);
    virtual ~Account() = default;
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual void print(std::ostream& os) const override;
};

#endif
