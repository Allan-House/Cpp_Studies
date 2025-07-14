#include <iostream>
#include <vector>
#include "SavingsAccount.h"
#include "AccountUtils.h"

int main() {
  std::cout.precision(2);
  std::cout << std::fixed;

  // Accounts
  std::vector<Account> accounts;
  accounts.push_back(Account{});
  accounts.push_back(Account{"Alex"});
  accounts.push_back(Account{"Ana", 2000.00});
  accounts.push_back(Account{"Bruno", 5000.00});

  display(accounts);
  deposit(accounts, 1000.00);
  withdraw(accounts, 2000.00);

  // Savings Accounts
  std::vector<SavingsAccount> savings_accounts;
  savings_accounts.push_back(SavingsAccount{});
  savings_accounts.push_back(SavingsAccount{"Beatriz"});
  savings_accounts.push_back(SavingsAccount{"Carlos", 2000.00});
  savings_accounts.push_back(SavingsAccount{"Clara", 5000.00, 5.0});
  
  display(savings_accounts);
  deposit(savings_accounts, 1000.00);
  withdraw(savings_accounts, 2000.00);

  // Checking Accounts
  std::vector<CheckingAccount> checking_accounts;
  checking_accounts.push_back(CheckingAccount{});
  checking_accounts.push_back(CheckingAccount{"Diego"});
  checking_accounts.push_back(CheckingAccount{"Diana", 2000.00});
  checking_accounts.push_back(CheckingAccount{"Eduardo", 5000.00});

  display(checking_accounts);
  deposit(checking_accounts, 1000.00);
  withdraw(checking_accounts, 2000.00);

  // Trust Accounts
  std::vector<TrustAccount> trust_accounts;
  trust_accounts.push_back(TrustAccount{});
  trust_accounts.push_back(TrustAccount{"Elena"});
  trust_accounts.push_back(TrustAccount{"Felipe", 2000.00});
  trust_accounts.push_back(TrustAccount{"Fernanda", 5000.00, 5.0});

  display(trust_accounts);
  deposit(trust_accounts, 1000.00);
  withdraw(trust_accounts, 2000.00);

  return 0;
}
