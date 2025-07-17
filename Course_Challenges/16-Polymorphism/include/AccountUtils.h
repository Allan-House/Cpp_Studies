#ifndef _ACCOUNT_UTILS_H_
#define _ACCOUNT_UTILS_H_

#include <vector>
#include "Account.h"

void display(const std::vector<Account *>& accounts);
void deposit(std::vector<Account *>& accounts, double amount);
void withdraw(std::vector<Account *>& accounts, double amount);

#endif
