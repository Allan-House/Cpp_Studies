#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include <iostream>
#include <cstdint>
#include "SavingsAccount.h"

class TrustAccount : public SavingsAccount {
  friend std::ostream& operator<<(std::ostream& os, const TrustAccount& account);
  private:
    static constexpr const char *default_name = "Unnamed Trust Account";
  protected:
    static constexpr double min_deposit_for_bonus = 5000.00;
    static constexpr double deposit_bonus = 50.00;
    static constexpr uint8_t max_annual_withdrawals = 3;
    static constexpr double max_withdrawal_percentage = 0.20;
    uint8_t withdrawals_this_year_{0};
  public:
    TrustAccount(std::string name = default_name,
                 double balance = default_balance,
                 double interest_rate = default_interest_rate);
    bool deposit(double amount);
    bool withdraw(double amount);
};
#endif
