#include "DiamondTrap.h"

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

#include <iostream>

DiamondTrap::DiamondTrap() : name_("default") {
}

DiamondTrap::DiamondTrap(const std::string& name) {
  this->setName(name);
  ClapTrap::name_ = this->getName() + "_clap_name";
  this->setHitPoints(100);
  this->setEnergyPoints(50);
  this->setAttackDamage(30);
}

DiamondTrap::~DiamondTrap() {
  std::cout << "Destructor of DiamondTrap " << this->getName() << " has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) {
  this->setName(other.getName());
  this->setHitPoints(other.getHitPoints());
  this->setEnergyPoints(other.getEnergyPoints());
  this->setAttackDamage(other.getAttackDamage());
  std::cout << "Copy constructor of DiamondTrap " << this->getName() << " has been called" << std::endl;
}

DiamondTrap& operator=(const DiamondTrap& other) {
  if (this != &other) {
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
  }
  std::cout << "Assignment operator of DiamondTrap " << this->getName() << " has been called" << std::endl;
  return *this;
}
