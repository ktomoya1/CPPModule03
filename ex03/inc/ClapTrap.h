#pragma once

#include <iostream>

class ClapTrap {
  public:
    ClapTrap();
    ClapTrap(const std::string& name);
    virtual ~ClapTrap();
    ClapTrap(const ClapTrap& other);
    ClapTrap& operator=(const ClapTrap& other);

    virtual void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

    std::string  getName() const;
    unsigned int getHitPoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;
    void         setName(const std::string& name);
    void         setHitPoints(const unsigned int& hit_points);
    void         setEnergyPoints(const unsigned int& energy_points);
    void         setAttackDamage(const unsigned int& attack_damage);
    void         printStatus() const;

  protected:
    std::string  name_;
    unsigned int hit_points_;
    unsigned int energy_points_;
    unsigned int attack_damage_;
};
