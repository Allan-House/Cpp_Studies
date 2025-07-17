#ifndef _I_PRINTABLE_H_
#define _I_PRINTABLE_H_

#include <iostream>

class IPrintable {
  public:
  virtual ~IPrintable() = default;
  virtual void print(std::ostream& os) const = 0;
  friend std::ostream& operator<<(std::ostream& os, const IPrintable& object) {
    object.print(os);
    return os;
  }
};

#endif
