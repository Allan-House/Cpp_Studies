#ifndef _ACCOUNT_UTILS_H_
#define _ACCOUNT_UTILS_H_

#include <vector>
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"

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

// Utility functions for Trust Account class
void display(const std::vector<TrustAccount>& accounts);
void deposit(std::vector<TrustAccount>& accounts, double amount);
void withdraw(std::vector<TrustAccount>& accounts, double amount);
#endif
