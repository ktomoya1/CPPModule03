#include "ScavTrap.h"

#include "ClapTrap.h"

int main() {
  ClapTrap clap("Blaster");
  ScavTrap scav("Sentinel");
//  ScavTrap scav_default;
//  ScavTrap scav_copy(scav);

//  scav_default.printStatus();
//  scav_copy.printStatus();
//  ClapTrap *clap2 = new ScavTrap("ktomoya");
//  clap2->attack(scav.getName());
  clap.printStatus();
  scav.printStatus();
  clap.attack(scav.getName());
  scav.takeDamage(clap.getAttackDamage());
  scav.attack(clap.getName());
  clap.takeDamage(scav.getAttackDamage());
  scav.beRepaired(10);
  scav.guardGate();
  //clap.guardGate();
  return 0;
}
