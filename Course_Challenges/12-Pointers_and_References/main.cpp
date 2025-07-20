#include <iostream>
#include <cstdlib>

int *apply_all(const int *const first_array, size_t first_size, const int *const second_array, size_t second_size);
void print(const int *const array, size_t size);

int main() {
  const size_t first_array_size {5};
  const size_t second_array_size {3};
  
  int first_array[] {1, 2, 3, 4, 5};
  int second_array[] {10, 20, 30};
  
  std::cout << "Array 1: " ;
  print(first_array, first_array_size);
  
  std::cout << "Array 2: " ;
  print(second_array, second_array_size);
  
  int *results = apply_all(first_array, first_array_size, second_array, second_array_size);
  constexpr size_t results_size {first_array_size * second_array_size};

  std::cout << "Result: " ;
  print(results, results_size);
  
  std::cout << std::endl;
  
  delete [] results;

  return 0;
}

int *apply_all(const int *const first_array, size_t first_size, const int *const second_array, size_t second_size) {
  int *result {};
  result = new int[first_size + second_size];
  int index {0};
  for (size_t i = 0; i < second_size; i++) {
    for (size_t j = 0; j < first_size; j++) {
      result[index] = first_array[j] * second_array[i];
      index++;
    }
  }
  return result;
}

void print(const int *const array, size_t size) {
  std::cout << "[ ";
  for (size_t i = 0; i < size; i++) {
    std::cout << *(array + i) << " ";
  }
  std::cout << "]" << std::endl;
}
