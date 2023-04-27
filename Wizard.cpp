#include "Wizard.hpp"
#pragma once

Wizard::Wizard()
{
    mana = 100;
}

Wizard::Wizard(string newName, int newLife, int newMana) : Character(newName, newLife)
{
    mana = newMana;
}

void Wizard::castASpell()
{
    cout << getName() << " lance un sort !" << endl;
}

void Wizard::takeManaPotion(int manaPoints)
{
    cout << getName() << " prend une potion de magie." << endl;
    mana += manaPoints;
    if (mana > 100)
    {
        mana = 100;
    }
}

void Wizard::display() const
{
    Character::display();
    cout << "C'est un mage avec " << mana << " points de magie." << endl;
}
