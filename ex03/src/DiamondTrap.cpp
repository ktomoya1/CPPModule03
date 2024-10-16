#include "DiamondTrap.h"

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

#include <iostream>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {
  this->setName(this->getName() + "_clap_name");
  this->setDiamondName("default");
  this->setEnergyPoints(50);
  std::cout << "Default constructor of DiamondTrap has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), name_(name) {
  this->setEnergyPoints(50);
  std::cout << "Constructor of DiamondTrap " << this->getDiamondName() << " has been called" << std::endl;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "Destructor of DiamondTrap " << this->getDiamondName() << " has been called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other), ScavTrap(other), FragTrap(other) {
  std::cout << "Copy constructor of DiamondTrap " << this->getDiamondName() << " has been called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  if (this != &other) {
    this->setName(other.getName());
    this->setDiamondName(other.getDiamondName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
  }
  std::cout << "Assignment operator of DiamondTrap " << this->getDiamondName() << " has been called" << std::endl;
  return *this;
}

void DiamondTrap::whoAmI() const {
  std::cout << "DiamondTrap name: " << this->getDiamondName() << std::endl;
  std::cout << "ClapTrap name: " << this->getName() << std::endl;
}

void DiamondTrap::printDiamondStatus() const {
  std::cout << "Name: " << this->getDiamondName() << std::endl;
  std::cout << "ClapTrap name: " << this->getName() << std::endl;
  std::cout << "Hit Points: " << this->hit_points_ << std::endl;
  std::cout << "Energy Points: " << this->energy_points_ << std::endl;
  std::cout << "Attack Damage: " << this->attack_damage_ << std::endl;
}

const std::string& DiamondTrap::getDiamondName() const {
  return this->name_;
}

void DiamondTrap::setDiamondName(const std::string& name) {
  this->name_ = name;
}
