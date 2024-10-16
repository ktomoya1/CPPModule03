#pragma once

#include "ClapTrap.h"

#include <iostream>

class ScavTrap : virtual public ClapTrap {
  public:
    ScavTrap();
    ScavTrap(const std::string& name);
    ~ScavTrap();
    ScavTrap(const ScavTrap& other);
    ScavTrap& operator=(const ScavTrap& other);

    void attack(const std::string& target);
    void guardGate();
};
