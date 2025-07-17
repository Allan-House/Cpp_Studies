#include <iostream>
#include "AccountUtils.h"

void display(const std::vector<Account *>& accounts) {
  std::cout << std::endl << "=============== Accounts ===============" << std::endl;
  for (const auto account : accounts) {
    std::cout << *account << std::endl;
  }
}

void deposit(std::vector<Account *>& accounts, double amount) {
  std::cout << std::endl << "=============== Depositing to Accounts ===============" << std::endl;
  for (auto account : accounts) {
    if (account->deposit(amount)) {
      std::cout << "Deposited $" << amount << " to " << *account << std::endl;
    }
    else {
      std::cout << "Failed deposit of $" << amount << " to " << *account << std::endl;
    }
  }
}

void withdraw(std::vector<Account *>& accounts, double amount) {
  std::cout << std::endl << "=============== Withdrawing from Accounts ===============" << std::endl;
  for (auto account : accounts) {
    if (account->withdraw(amount)) {
      std::cout << "Withdrew $" << amount << " from " << *account << std::endl;
    }
    else {
      std::cout << "Failed withdrawal of $" << amount << " from " << *account << std::endl;
    }
  }
}
