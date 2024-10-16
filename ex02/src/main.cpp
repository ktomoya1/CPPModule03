#include "FragTrap.h"

#include "ClapTrap.h"
#include "ScavTrap.h"

#include <iostream>

int main() {
  ScavTrap scav("Blaster");
  FragTrap frag("Vortex");
//  FragTrap frag_default;
//  FragTrap frag_copy(frag);

  scav.printStatus();
  frag.printStatus();
//  frag_default.printStatus();
//  frag_copy.printStatus();
  scav.attack(frag.getName());
  frag.takeDamage(scav.getAttackDamage());
  frag.beRepaired(10);
  frag.attack(scav.getName());
  scav.takeDamage(frag.getAttackDamage());
  frag.highFiveGuys();

  return 0;
}

