#include <iostream>
#include <vector>

int main() {
  std::vector<int> vector1, vector2;

  // Vector 1
  vector1.push_back(10);
  vector1.push_back(20);
  std::cout << "Vector 1: ";
  for (size_t i = 0; i < vector1.size(); i++) {
    std::cout << vector1.at(i) << " ";
  }
  std::cout << "| Size: " << vector1.size() << std::endl;

  // Vector 2
  vector2.push_back(100);
  vector2.push_back(200);
  std::cout << std::endl << "Vector 2: ";
  for (size_t i = 0; i < vector2.size(); i++) {
    std::cout << vector2.at(i) << " ";
  }
  std::cout << "| Size: " << vector2.size() << std::endl;

  // 2D Vector
  std::vector<std::vector<int>> vector_2d;
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);
  std::cout << std::endl << "2D Vector:" << std::endl;
  for (std::vector<int> &vec : vector_2d) {
    for (int i = 0; i < vec.size(); i++) {
      std::cout << vec.at(i) << " ";
    }
    std::cout << std::endl;
  }

  vector1.at(0) = 1000;
  std::cout << std::endl << "Vector 1 at (0) = 1000" << std::endl;

  std::cout << std::endl << "2D Vector:" << std::endl;
  for (std::vector<int> &vec : vector_2d) {
    for (int i = 0; i < vec.size(); i++) {
      std::cout << vec.at(i) << " ";
    }
    std::cout << std::endl;
  }

  return 0;
}