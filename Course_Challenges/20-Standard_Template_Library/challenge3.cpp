#include <iostream>
#include <fstream>
#include <sstream>
#include <map>
#include <set>
#include <string>
#include <iomanip>

void display_words(const std::map<std::string, int>& words);
std::string clean_string(const std::string& str);

int main() {
  std::map<std::string, int> words_count;
  std::string line, word;
  std::ifstream in_file {"./words.txt"};
  if (in_file) {
    
    
    in_file.close();
    display_words(words_count);
  } else {
    std::cerr << "Error opening input file." << std::endl;
  }

  return 0;
}

void display_words(const std::map<std::string, int>& words) {
  std::cout << std::setw(12) << std::left << std::endl << "Word"
            << std::setw(7) << std::right << "Count" << std::endl;
  std::cout << "==========" << std::endl;
  for (auto pair : words) {
    std::cout << std::setw(12) << std::left << pair.first
              << std::setw(7) << std::right << pair.second << std::endl;
  }
}

// Return a reference?
std::string clean_string(const std::string& str) {
  std::string result;
  for (char c : str) {
    if (c == '.' || c == ',' || c == ';' || c == ':') {
      continue;
    } else {
      result += c;
    }
  }
  return result;
}