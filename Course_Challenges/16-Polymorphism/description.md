# Section 16 Challenge - Polymorphism

You are provided with a completed Account class hierarchy that was completed in Section 15. The provided class hierarchy does not use dynamic polymorphism (it has no virtual functions!)

Your challenge is the following:

1. Modify the Account class so that it is now an Abstract class by adding the following pure virtual functions:

```C++
virtual bool deposit(double amount) = 0;
virtual bool withdraw(double amount) = 0;
```

Hint: you can implement these functions in the Account class if it makes sense

2. Create an I_Printable class interface as we did in the course and provide functionality so all accounts are printable to an ostream using the overloaded insertion operator.

```C++
class I_Printable {
  friend std::ostream &operator<<(std::ostream &os, const I_Printable &obj);
  public:
    virtual void print(std::ostream &os) const = 0;
    virtual ~I_Printable() = default;
};
```

3. Modify the functions in the Account_Util files so we only have one version of each. For example,

```C++
void display(const std::vector<Account *> &accounts);
void deposit(std::vector<Account *> &accounts, double amount);
void withdraw(std::vector<Account *> &accounts, double amount);
```  

Note that the vector is a vector of pointers to Account objects <Account *> This is what we need for dynamic polymorphism.
        
4. Test your code with base class pointers as well as local objects. I provided a simple main driver that will get you started

Hints:
- Reuse existing functionality!!
- If your class has a virtual function then be sure to implement a virtual destructor. You can have the C++ generate a default destructor for you with: `virtual ~Class_Name() = default;`
- Take it one step at a time.
- Start by making the Account class abstract by adding the pure virtual functions.
