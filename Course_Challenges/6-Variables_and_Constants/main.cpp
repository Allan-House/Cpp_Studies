#include <iostream>

int main() {
  
  int small_rooms {0}; 
  std::cout << "How many small rooms would you like cleaned? ";
  std::cin >> small_rooms;
  
  int large_rooms {0};
  std::cout << "How many large rooms would you like cleaned? ";
  std::cin >> large_rooms;
  
  const double small_room_charge {25.00};
  const double large_room_charge {35.00};
  const double sales_tax {0.06};
  const int estimate_expiry {30};
  
  double cost = small_room_charge * small_rooms + large_room_charge * large_rooms;
  double tax_charged = cost * sales_tax;

  std::cout << "Estimate for carpet cleaning service" << std::endl;
  std::cout << "Number of small rooms: " << small_rooms << std::endl;
  std::cout << "Number of large rooms: " << large_rooms << std::endl;
  std::cout << "Price per small room: $" << small_room_charge << std::endl;
  std::cout << "Price per large room: $" << large_room_charge << std::endl;
  std::cout << "Cost: $" << cost << std::endl;
  std::cout << "Tax: $" << tax_charged << std::endl;
  std::cout << "==============================" << std::endl;
  std::cout << "Total estimate: $" << cost + tax_charged << std::endl;
  std::cout << "This estimate is valid for " << estimate_expiry << " days." << std::endl;

  return 0;
}