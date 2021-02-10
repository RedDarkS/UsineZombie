#include "Rapace.h"

Rapace::Rapace()
{
    setPv(getPv()/2);
    setForce(getForce()/2);
}

Rapace::~Rapace()
{
    cout << "Rapace envole" << endl;
}

void Rapace::AttaqueRapide(zombie *cible)
{
    cout << getNom() << " attaque rapidement " << cible->getNom() << endl;

    cible->setPv(cible->getPv() - getForce()/2);
    setPv(getPv() + getForce()/2);
}
