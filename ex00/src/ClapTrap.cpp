#include "ClapTrap.h"

#include <iostream>

ClapTrap::ClapTrap() {
  this->setName("default");
  this->setHitPoints(10);
  this->setEnergyPoints(10);
  this->setAttackDamage(0);
  std::cout << "Default constructor of ClapTrap has been called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) {
  this->setName(name);
  this->setHitPoints(10);
  this->setEnergyPoints(10);
  this->setAttackDamage(0);
  std::cout << "Constructor of ClapTrap " << name << " has been called" << std::endl;
}

ClapTrap::~ClapTrap() {
  std::cout << "Destructor of ClapTrap " << this->getName() << " has been called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
  this->setName(other.getName());
  this->setHitPoints(other.getHitPoints());
  this->setEnergyPoints(other.getEnergyPoints());
  this->setAttackDamage(other.getAttackDamage());
  std::cout << "Copy constructor of ClapTrap " << this->getName() << " has been called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
  if (this != &other) {
    this->setName(other.getName());
    this->setHitPoints(other.getHitPoints());
    this->setEnergyPoints(other.getEnergyPoints());
    this->setAttackDamage(other.getAttackDamage());
  }
  std::cout << "Assignment operator of ClapTrap " << this->getName() << " has been called" << std::endl;
  return *this;
}

void ClapTrap::attack(const std::string& target) {
  if (this->getHitPoints() == 0 || this->getEnergyPoints() == 0) {
    std::cout << "ClapTrap " << this->getName() << " couldn't attack..." << std::endl;
    return;
  }
  this->setEnergyPoints(this->getEnergyPoints() - 1);
  std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->attack_damage_ << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (this->getHitPoints() < amount) {
    this->setHitPoints(0);
  } else {
    this->setHitPoints(this->getHitPoints() - amount);
  }
  std::cout << "ClapTrap " << this->getName() << " has taken " << amount << " damage!" << std::endl;
  std::cout << "Remaining hit points is " << this->getHitPoints() << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (this->getHitPoints() == 0 || this->getEnergyPoints() == 0) {
    std::cout << "ClapTrap " << this->getName() << " couldn't be repaired..." << std::endl;
    return;
  }
  this->setEnergyPoints(this->getEnergyPoints() - 1);
  this->setHitPoints(this->getHitPoints() + amount);
  std::cout << "ClapTrap " << this->getName() << " has been repaired by " << amount << " points!" << std::endl;
  std::cout << "Remaining hit points is " << this->getHitPoints() << std::endl;
}

std::string ClapTrap::getName() const {
  return this->name_;
}

unsigned int ClapTrap::getHitPoints() const {
  return this->hit_points_;
}

unsigned int ClapTrap::getEnergyPoints() const {
  return this->energy_points_;
}

unsigned int ClapTrap::getAttackDamage() const {
  return this->attack_damage_;
}

void ClapTrap::setName(const std::string& name) {
  this->name_ = name;
}

void ClapTrap::setHitPoints(const unsigned int& hit_points) {
  this->hit_points_ = hit_points;
}

void ClapTrap::setEnergyPoints(const unsigned int& energy_points) {
  this->energy_points_ = energy_points;
}

void ClapTrap::setAttackDamage(const unsigned int& attack_damage) {
  this->attack_damage_ = attack_damage;
}
