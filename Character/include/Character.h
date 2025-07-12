#ifndef _CHARACTER_H_
#define _CHARACTER_H_

#include <cstdint>
#include <string>

class Character {
  private:
    std::string name_;
    uint8_t level_{1};
    uint8_t health_{1};
    uint8_t attack_;
    uint8_t defense_;
  public:
    Character();
    Character (const std::string& name, uint8_t level);
    ~Character();

    void Attack();
    bool IsDead();
    void Talk(const std::string& speech);
    void Display();

    std::string get_name() {return name_;}
    uint8_t get_level() {return level_;}
    uint8_t get_health() {return health_;}
    uint8_t get_attack() {return attack_;}
    uint8_t get_defense() {return defense_;}

    void set_name(std::string name) {name_ = name;}
    void set_level(uint8_t level) {level_ = level;}
    void set_health(uint8_t health) {health_ = health;}
    void set_attack(uint8_t attack) {attack_ = attack;}
    void set_defense(uint8_t defense) {defense_ = defense;}
};

#endif