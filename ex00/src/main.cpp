#include "ClapTrap.h"

int main() {
  ClapTrap bolt("Gear");
  ClapTrap spike("Zapper");

  bolt.attack(spike.getName());
  spike.takeDamage(bolt.getAttackDamage());
  spike.takeDamage(5);
  spike.beRepaired(4);
  spike.takeDamage(5);
  spike.takeDamage(1000);
  return 0;
}
