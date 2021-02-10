#include "Bomber.h"

Bomber::Bomber()
{
    setForce(getForce()*2);
}

Bomber::~Bomber()
{
    cout << "Bomber detruit" << endl;
}

void Bomber::Kamikaze(zombie *cible)
{
    cout << getNom() << " kamikaze " << cible->getNom() << endl;

    cible->setPv(cible->getPv() - 3*getForce());
    this->~Bomber();
    this->~zombie();
}
