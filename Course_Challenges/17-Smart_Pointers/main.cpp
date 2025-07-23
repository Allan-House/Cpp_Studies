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

void fill(std::vector<std::shared_ptr<Test>>& vec, int num);
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void display(std::vector<std::shared_ptr<Test>>& vec);

int main() {
  std::unique_ptr<std::vector<std::shared_ptr<Test>>> ptr = make();
  std::cout << "How many data points do you want to enter: ";
  int num;
  std::cin >> num;
  fill(*ptr, num);
  display(*ptr);
  return 0;
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make() {
  return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>>& vec, int num) {
  int temp;
  for (int i = 1; i <= num; i++) {
    std::cout << "Enter data point [" << i << "] : ";
    std::cin >> temp; 
    vec.push_back(std::make_shared<Test>(temp));
  }
}

void display(std::vector<std::shared_ptr<Test>>& vec) {
  std:: cout << "vector = { ";
  for (const auto &ptr : vec) {
    std::cout << ptr->get_data() << " ";
  }
  std::cout << "}" << std::endl;
}