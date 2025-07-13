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
  accounts.push_back(Account{"Larry"});
  accounts.push_back(Account{"Moe", 2000.00});
  accounts.push_back(Account{"Curly", 5000.00});

  display(accounts);
  deposit(accounts, 1000.00);
  withdraw(accounts, 2000.00);

  // Savings Accounts
  std::vector<SavingsAccount> savings_accounts;
  savings_accounts.push_back(SavingsAccount{});
  savings_accounts.push_back(SavingsAccount{"Superman"});
  savings_accounts.push_back(SavingsAccount{"Batman", 2000.00});
  savings_accounts.push_back(SavingsAccount{"Wonder Woman", 5000.00, 5.0});
  
  display(savings_accounts);
  deposit(savings_accounts, 1000.00);
  withdraw(savings_accounts, 2000.00);

  // Checking Accounts
  std::vector<CheckingAccount> checking_accounts;
  checking_accounts.push_back(CheckingAccount{});
  checking_accounts.push_back(CheckingAccount{"A"});
  checking_accounts.push_back(CheckingAccount{"B", 2000.00});
  checking_accounts.push_back(CheckingAccount{"C", 5000.00, 5.0});

  display(checking_accounts);
  deposit(checking_accounts, 1000.00);
  withdraw(checking_accounts, 2000.00);

  return 0;
}
