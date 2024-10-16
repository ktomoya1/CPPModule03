#include "DiamondTrap.h"

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

#include <iostream>

int main() {
  DiamondTrap diamond("Vortex");
  DiamondTrap diamond_default;
  ClapTrap clap("Spark");

  diamond.printDiamondStatus();
  diamond_default.printDiamondStatus();

  diamond.attack(clap.getName());
  diamond.beRepaired(10);
  diamond.highFiveGuys();

  diamond.whoAmI();

  return 0;
}

