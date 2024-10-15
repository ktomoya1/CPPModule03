#include "ScavTrap.h"

#include "ClapTrap.h"

int main() {
  ClapTrap clap_unit("Blaster");
  ScavTrap scav_unit("Sentinel");
  ScavTrap scav_copy(scav_unit);

  // ClapTrapのattackとScavTrapのattackで表示内容が違う
  clap_unit.attack(scav_unit.getName());
  scav_unit.takeDamage(clap_unit.getAttackDamage());
  scav_unit.attack(clap_unit.getName());
  clap_unit.takeDamage(scav_unit.getAttackDamage());
  scav_unit.beRepaired(10);
  // ClapTrapはguardGate()を使えないことの確認
  scav_unit.guardGate();
  // clap_unit.guardGate();
  return 0;
}
