#include "ClapTrap.h"
#include "FragTrap.h"

#include <iostream>

int main() {
  ClapTrap clap_unit("Blaster");
  FragTrap frag_unit("Vortex");
  FragTrap frag_copy(frag_unit);

  std::cout << "ClapTrap:" << std::endl;
  std::cout << "Name: " << clap_unit.getName() << std::endl;
  std::cout << "Hit Points: " << clap_unit.getHitPoints() << std::endl;
  std::cout << "Energy Points: " << clap_unit.getEnergyPoints() << std::endl;
  std::cout << "Attack Damage: " << clap_unit.getAttackDamage() << std::endl;

  std::cout << std::endl << "FragTrap:" << std::endl;
  std::cout << "Name: " << frag_unit.getName() << std::endl;
  std::cout << "Hit Points: " << frag_unit.getHitPoints() << std::endl;
  std::cout << "Energy Points: " << frag_unit.getEnergyPoints() << std::endl;
  std::cout << "Attack Damage: " << frag_unit.getAttackDamage() << std::endl;

  clap_unit.attack(frag_unit.getName());
  frag_unit.takeDamage(clap_unit.getAttackDamage());
  frag_unit.beRepaired(10);
  frag_unit.highFiveGuys();

  return 0;
}

