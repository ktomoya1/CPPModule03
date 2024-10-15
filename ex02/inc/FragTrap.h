#pragma once

#include "ClapTrap.h"

#include <iostream>

class FragTrap : public ClapTrap {
  public:
    FragTrap(const std::string& name);
    ~FragTrap();
    FragTrap(const FragTrap& other);
    FragTrap& operator=(const FragTrap& other);

    void highFiveGuys();
};
