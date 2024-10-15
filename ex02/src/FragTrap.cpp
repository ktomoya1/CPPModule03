#include "ClapTrap.h"
#include "FragTrap.h"

#include <iostream>

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
  this->setHitPoints(100);
  this->setEnergyPoints(100);
  this->setAttackDamage(30);
  std::cout << "Constructor of FragTrap " << name << " has been called" << std::endl;
}

FragTrap::~FragTrap() {
  std::cout << "Destructor of FragTrap " << this->getName() << " has been called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
  std::cout << "Copy constructor of FragTrap " << this->getName() << " has been called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
  if (this != &other) {
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
  }
  std::cout << "Assignment operator of FragTrap " << this->getName() << " has been called" << std::endl;
  return *this;
}

void FragTrap::highFiveGuys() {
  std::cout << "FragTrap is feeling awesome! How about a high five, everyone?" << std::endl;
}
