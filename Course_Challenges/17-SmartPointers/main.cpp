#include <iostream>
#include <memory>
#include <vector>

class Test {
  private:
    int data_;
  public:
    Test(): data_{0} {}
    Test(int data) : data_{data} {}
    int get_data() {return data_;}
    ~Test() {}
};

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
  return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

/*
A function named "fill" that expects a vector of shared pointers to Test objects and an int representing the number of Test objects 
to create dynamically and add to the vector. This function will prompr the user to enter an integer,
create a shared pointers to a Test object initialized to the entered integer and add that shared pointer to the vector.
*/


int main() {

  return 0;
}