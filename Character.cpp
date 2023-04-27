#include "Character.hpp"
#pragma once

Character::Character()
{
    name = "";
    life = 100;
}

Character::Character(string newName, int newLife)
{
    name = newName;
    life = newLife;
}

void Character::rename(string newName)
{
    name = newName;
}

void Character::display() const
{
    cout << name << " a " << life << " points de vie." << endl;
}

string Character::getName() const
{
    return name;
}