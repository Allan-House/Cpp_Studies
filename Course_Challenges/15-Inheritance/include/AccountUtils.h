#ifndef _ACCOUNT_UTILS_H_
#define _ACCOUNT_UTILS_H_

#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"

// Utility functions for Account class
void display(const std::vector<Account>& accounts);
void deposit(std::vector<Account>& accounts, double amount);
void withdraw(std::vector<Account>& accounts, double amount);

// Utility functions for Savings Account class
void display(const std::vector<SavingsAccount>& accounts);
void deposit(std::vector<SavingsAccount>& accounts, double amount);
void withdraw(std::vector<SavingsAccount>& accounts, double amount);

// Utility functions for Checking Account class
void display(const std::vector<CheckingAccount>& accounts);
void deposit(std::vector<CheckingAccount>& accounts, double amount);
void withdraw(std::vector<CheckingAccount>& accounts, double amount);
#endif
