#include "Character.cpp"
#include "Wizard.cpp"

int main()
{
    Character aragorn("Aragorn", 100);
    aragorn.display();

    Wizard saruman("Saruman", 100, 80);
    saruman.display();

    return 0;
}