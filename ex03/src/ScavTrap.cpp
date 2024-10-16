#include "ClapTrap.h"
#include "ScavTrap.h"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap() {
  this->setHitPoints(100);
  this->setEnergyPoints(50);
  this->setAttackDamage(20);
  std::cout << "Default constructor of ScavTrap has been called" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
  this->hit_points_ = 100;
  this->energy_points_ = 50;
  this->attack_damage_ = 20;
  std::cout << "Constructor of ScavTrap " << name << " has been called" << std::endl;
}

ScavTrap::~ScavTrap() {
  std::cout << "Destructor of ScavTrap " << this->getName() << " has been called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
  std::cout << "Copy constructor of ScavTrap " << this->getName() << " has been called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  if (this != &other) {
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
  }
  std::cout << "Assignment operator of ScavTrap " << this->getName() << " has been called" << std::endl;
  return *this;
}

void ScavTrap::attack(const std::string& target) {
  if (this->getHitPoints() == 0 || this->getEnergyPoints() == 0) {
    std::cout << "ScavTrap " << this->getName() << " couldn't attack..." << std::endl;
    return;
  }
  this->setEnergyPoints(this->getEnergyPoints() - 1);
  std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << this->getName() << " is now in Gatekeeper mode!" << std::endl;
}
