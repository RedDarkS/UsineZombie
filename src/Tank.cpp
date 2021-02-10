#include "Tank.h"

Tank::Tank()
{

}

Tank::~Tank()
{
    cout << "Tank broye" << endl;
}

void Tank::Charge(zombie *cible)
{
    cout << getNom() << " charge " << cible->getNom() << endl;
    cible->setPv(cible->getPv() - getArmor());
}

int Tank::getArmor() const
{
	return armor;
}

void Tank::setArmor(int a)
{
    armor = a;
}

