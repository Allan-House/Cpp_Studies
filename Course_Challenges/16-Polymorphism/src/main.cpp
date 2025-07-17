#include <vector>
#include "Account.h"
#include "CheckingAccount.h"
#include "SavingsAccount.h"
#include "TrustAccount.h"
#include "AccountUtils.h"

int main() {
  Account *p1 = new CheckingAccount{"Alex", 10'000};
  Account *p2 = new SavingsAccount{"Ana", 1'000};
  Account *p3 = new TrustAccount{"Beatriz"};
  
  std::vector<Account *> accounts {p1, p2, p3};

  display(accounts);
  deposit(accounts, 1000);
  withdraw(accounts, 2000);
  display(accounts);

  delete p1;
  delete p2;
  delete p3;
  
  return 0;
}
