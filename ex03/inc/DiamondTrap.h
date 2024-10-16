#pragma once

#include "ClapTrap.h"
#include "ScavTrap.h"
#include "FragTrap.h"

#include <iostream>

class DiamondTrap : public ScavTrap, public FragTrap {
  public:
    DiamondTrap();
    DiamondTrap(const std::string& name);
    ~DiamondTrap();
    DiamondTrap(const DiamondTrap& other);
    DiamondTrap& operator=(const DiamondTrap& other);

    void whoAmI() const;
    void printStatus();
    const std::string& getDiamondName() const;
    void setDiamondName(const std::string& name);

  private:
    std::string name_;
};
