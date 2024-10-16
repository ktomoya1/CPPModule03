#include "ClapTrap.h"

int main() {
  ClapTrap clap1("Gear");
  ClapTrap clap2("Zapper");
  ClapTrap clap3;

//  clap1.printStatus();
//  clap2.printStatus();
//  clap3.printStatus();
//  clap3 = clap1;
//  clap1.printStatus();

  clap1.attack(clap2.getName());
  clap2.takeDamage(clap1.getAttackDamage());
  clap2.takeDamage(5);
  clap2.beRepaired(4);
  clap2.takeDamage(5);
  clap2.takeDamage(5);
  clap2.attack(clap1.getName());
  clap2.beRepaired(10);
  return 0;
}
