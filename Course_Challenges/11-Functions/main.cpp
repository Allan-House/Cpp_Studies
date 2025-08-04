#include <iostream>
#include <vector>

void print_menu();
void print_vector(const std::vector<int>& vec);
void add_integer(std::vector<int>& vec);
void display_mean(const std::vector<int>& vec);
void display_smallest(const std::vector<int>& vec);
void display_largest(const std::vector<int>& vec);
void display_occurrences(const std::vector<int>& vec);
void clear(std::vector<int>& vec);

int main() {
  std::vector<int> vector;
  bool keep_running {true};
  char choice;

  std::cout << "Welcome!" << std::endl;
  while (keep_running) {
    print_menu();
    std::cin >> choice;

    switch (choice) {
      case 'P': case 'p':
        print_vector(vector);
        break;
      case 'A': case 'a':
        add_integer(vector);
        break;
      case 'M': case 'm':
        display_mean(vector);
        break;
      case 'S': case 's':
        display_smallest(vector);
        break;
      case 'L': case 'l':
        display_largest(vector);
        break;
      case 'O': case 'o':
        display_occurrences(vector);
        break;
      case 'C': case 'c':
        clear(vector);
        break;
      case 'Q': case 'q':
        std::cout << "Goodbye" << std::endl;
        keep_running = false;
        break;
      default:
        std::cout << "Unknown selection, please try again." << std::endl;
    }
  }

  return 0;
}

void print_menu() {
  std::cout << std::endl;
  std::cout << "P - Print the collection." << std::endl;
  std::cout << "A - Add a number." << std::endl;
  std::cout << "M - Display mean of the numbers." << std::endl;
  std::cout << "S - Display the smallest number." << std::endl;
  std::cout << "L - Display the largest number." << std::endl;
  std::cout << "O - Display the amount of occurences of a number." << std::endl;
  std::cout << "C - Clear the collection." << std::endl;
  std::cout << "Q - Quit." << std::endl;
  std::cout << std::endl << "Enter your choice: ";
}

void print_vector(const std::vector<int>& vec) {
  std::cout << "[ ";
  for (const int num : vec) {
    std::cout << num << " ";
  }
  std::cout << "]" << std::endl;
}

void add_integer(std::vector<int>& vec) {
  std::cout << "Enter a number: ";
  int num;
  std::cin >> num;
  vec.push_back(num);
  std::cout << num << " added." << std::endl;
}

void display_mean(const std::vector<int>& vec) {
  if (vec.empty()) {
    std::cout << "Unable to calculate the mean - no data." << std::endl;
    return;
  }
  double avg {0};
  for (const int num : vec) {
    avg += num;
  }
  avg /= vec.size();
  std::cout << "The mean is " << avg << std::endl;
}

void display_smallest(const std::vector<int>& vec) {
  if (vec.empty()) {
    std::cout << "Unable to determine the smallest number - collection is empty." << std::endl;
    return;
  }
  int smallest = vec.front();
  for (const int num : vec) {
    if (num < smallest) {
      smallest = num;
    }
  }
  std::cout << "The smallest number is " << smallest << std::endl;
}

void display_largest(const std::vector<int>& vec) {
  if (vec.empty()) {
    std::cout << "Unable to determine the largest number - collection is empty." << std::endl;
    return;
  }
  int largest = vec.front();
  for (const int num : vec) {
    if (num > largest) {
      largest = num;
    }
  }
  std::cout << "The largest number is " << largest << std::endl;
}

void display_occurrences(const std::vector<int>& vec) {
  std::cout << "Enter a number: ";
  int chosen {0}, count {0};
  std::cin >> chosen;
  for (const int num : vec) {
    if (num == chosen) {
      count++;
    }
  }
  std::cout << chosen << " occured " << count << " times in the collection." << std::endl;
}

void clear(std::vector<int>& vec) {
  vec.clear();
  std::cout << "Collection cleared." << std::endl;
  print_vector(vec);
}
