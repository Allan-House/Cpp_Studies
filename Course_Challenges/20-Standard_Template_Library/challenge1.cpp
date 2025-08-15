#include <iostream>
#include <iomanip>
#include <deque>
#include <string>
#include <vector>

bool is_palindrome(const std::string& str);

int main() {
  std::vector<std::string> test_strings{ "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
    "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
    "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" };
   
  std::cout << std::boolalpha;
  std::cout << std::setw(8) << std::left << "Result" << "String" << std::endl;
  for(const auto& str : test_strings) {
    std::cout << std::setw(8) << std::left << is_palindrome(str)  << str << std::endl;
  }
  std::cout << std::endl;
   
  return 0;
}

bool is_palindrome(const std::string& str) {
  std::deque<char> d;
  std::deque<char> reversed;

  for (char c : str) {
    if (std::isalpha(c)) {
      d.push_back(c);
    }
  }

  char c1 {};
  char c2 {};

  while(d.size() > 1) {
    c1 = d.front();
    c2 = d.back();
    d.pop_front();
    d.pop_back();
    if(c1 != c2) {
      return false;
    }
  }
  
  return true;
}