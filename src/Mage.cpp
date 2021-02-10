#include "Mage.h"

Mage::Mage()
{
    setPv(getPv()/2);
    setForce(getForce()/2);
}

Mage::~Mage()
{
    cout << "Mage parti en fumee" << endl;
}

void Mage::sortUNIQUE(zombie *cible)
{
    cout << getNom() << " sortifie " << cible->getNom() << endl;
    if(!cooldown)
    {
        cible->setForce(cible->getForce()/2);
        //cible->setArmor(cible->getArmor()/2);
        cooldown = true;
    }
    else
    {
        cout << "Sort en cooldown" << endl;
    }
}
