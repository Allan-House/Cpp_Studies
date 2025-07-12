#include <iostream>
#include "Character.h"

Character::Character() {}

Character::Character (const std::string& name, uint8_t level) {
  name_ = name;
  level_ = level;
}

Character::~Character() {}

void Character::Attack() {}

bool Character::IsDead() {
  return health_ == 0;
}

void Character::Talk(const std::string& speech) {
  std::cout << name_ << ": " << speech << std::endl;
}

void Character::Display() {
  std::cout << name_ << "    " 
            << "Level: " << static_cast<int>(level_) << std::endl;
}