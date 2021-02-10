#include "Fusion.h"

Fusion::Fusion()
{
    //ctor
}

Fusion::~Fusion()
{
    cout << "Fusion mort" << endl;
}

void Fusion::Absorption(zombie *cible)
{
    cout << getNom() << " fusionne avec " << cible->getNom() << endl;
    //cas d'absorption d'un boomer

    if(cible->getPv() <= getPv() && cible->getForce() <= getForce())
    {
        setPv(cible->getPv() + getPv());
        setForce(cible->getForce() + getForce());

        //gérer l'armure qui devient des PV

        cible->~zombie();

        if(getPv() > 500 && getForce() > 200){
            cout << "un dieu zombie est né" << endl;
            exit(0);
        }
    }
    else
    {
        cout << "adversaire trop puissant" << endl;
    }

}
