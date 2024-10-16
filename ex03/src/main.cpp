#include "DiamondTrap.h"

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

#include <iostream>

int main() {
  DiamondTrap diamond_unit("Vortex");
  ClapTrap clap_unit("Clap");

  diamond_unit.whoAmI();

  diamond_unit.attack(clap_unit.getName());
  std::cout << std::endl << "ClapTrap:" << std::endl;
  std::cout << "Name: " << clap_unit.getName() << std::endl;
  std::cout << "Hit Points: " << clap_unit.getHitPoints() << std::endl;
  std::cout << "Energy Points: " << clap_unit.getEnergyPoints() << std::endl;
  std::cout << "Attack Damage: " << clap_unit.getAttackDamage() << std::endl;
  std::cout << std::endl << "DiamondTrap:" << std::endl;
  diamond_unit.printStatus();

  diamond_unit.beRepaired(10);
  diamond_unit.highFiveGuys();

  return 0;
}

