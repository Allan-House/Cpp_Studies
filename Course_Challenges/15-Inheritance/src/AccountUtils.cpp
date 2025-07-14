#include <iostream>
#include "AccountUtils.h"

/* Utility functions for Account class */

void display(const std::vector<Account>& accounts) {
  std::cout << std::endl << "=============== Accounts ===============" << std::endl;
  for (const auto &account : accounts) {
    std::cout << account << std::endl;
  }
}

void deposit(std::vector<Account>& accounts, double amount) {
  std::cout << std::endl << "=============== Depositing to Accounts ===============" << std::endl;
  for (auto &account : accounts) {
    if (account.deposit(amount)) {
      std::cout << "Deposited $" << amount << " to " << account << std::endl;
    }
    else {
      std::cout << "Failed deposit of $" << amount << " to " << account << std::endl;
    }
  }
}

void withdraw(std::vector<Account>& accounts, double amount) {
  std::cout << std::endl << "=============== Withdrawing from Accounts ===============" << std::endl;
  for (auto &account : accounts) {
    if (account.withdraw(amount)) {
      std::cout << "Withdrew $" << amount << " from " << account << std::endl;
    }
    else {
      std::cout << "Failed withdrawal of $" << amount << " from " << account << std::endl;
    }
  }
}

/* Utility functions for Savings Account class */

void display(const std::vector<SavingsAccount>& accounts) {
  std::cout << std::endl << "=============== Savings Account ===============" << std::endl;
  for (const auto &account : accounts) {
    std::cout << account << std::endl;
  }
}

void deposit(std::vector<SavingsAccount>& accounts, double amount) {
  std::cout << std::endl << "=============== Deposit to Savings Accounts ===============" << std::endl;
  for (auto &account : accounts) {
    if (account.deposit(amount)) {
      std::cout << "Deposited $" << amount << " to " << account << std::endl;
    }
    else {
      std::cout << "Failed deposit of $" << amount << " to " << account << std::endl;
    }
  }
}

void withdraw(std::vector<SavingsAccount>& accounts, double amount) {
  std::cout << std::endl << "=============== Withdrawing from Savings Accounts ===============" << std::endl;
  for (auto &account : accounts) {
    if (account.withdraw(amount)) {
      std::cout << "Withdrew $" << amount << " from " << account << std::endl;
    }
    else {
      std::cout << "Failed withdrawal of $" << amount << " from " << account << std::endl;
    }
  }
}

/* Utility functions for Checking Account class */

void display(const std::vector<CheckingAccount>& accounts) {
  std::cout << std::endl << "=============== Checking Accounts ===============" << std::endl;
  for (const auto &account : accounts) {
    std::cout << account << std::endl;
  }
}

void deposit(std::vector<CheckingAccount>& accounts, double amount) {
  std::cout << std::endl << "=============== Deposit to Checking Accounts ===============" << std::endl;
  for (auto &account : accounts) {
    if (account.deposit(amount)) {
      std::cout << "Deposited $" << amount << " to " << account << std::endl;
    }
    else {
      std::cout << "Failed deposit of $" << amount << " to " << account << std::endl;
    }
  }
}

void withdraw(std::vector<CheckingAccount>& accounts, double amount) {
  std::cout << std::endl << "=============== Withdrawing from Checking Accounts ===============" << std::endl;
  for (auto &account : accounts) {
    if (account.withdraw(amount)) {
      std::cout << "Withdrew $" << amount << " from " << account << std::endl;
    }
    else {
      std::cout << "Failed withdrawal of $" << amount << " from " << account << std::endl;
    }
  }
}

/* Utility functions for Trust Account class*/

void display(const std::vector<TrustAccount>& accounts) {
  std::cout << std::endl << "=============== Trust Accounts ===============" << std::endl;
  for (const auto &account : accounts) {
    std::cout << account << std::endl;
  }
}

void deposit(std::vector<TrustAccount>& accounts, double amount) {
  std::cout << std::endl << "=============== Deposit to Trust Accounts ===============" << std::endl;
  for (auto &account : accounts) {
    if (account.deposit(amount)) {
      std::cout << "Deposited $" << amount << " to " << account << std::endl;
    }
    else {
      std::cout << "Failed deposit of $" << amount << " to " << account << std::endl;
    }
  }
}

void withdraw(std::vector<TrustAccount>& accounts, double amount) {
  std::cout << std::endl << "=============== Withdrawing from Trust Accounts ===============" << std::endl;
  for (auto &account : accounts) {
    if (account.withdraw(amount)) {
      std::cout << "Withdrew $" << amount << " from " << account << std::endl;
    }
    else {
      std::cout << "Failed withdrawal of $" << amount << " from " << account << std::endl;
    }
  }
}
