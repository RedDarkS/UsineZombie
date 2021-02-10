#include "zombie.h"

zombie::zombie()
{
	nom = "Default";
    pv = 50;
	force = 5;
}

zombie::zombie(string n, int p, int f)
{
	if(p > 100 || f > 10)
	{
		this->~zombie();
	}
	else
	{
		nom = n;
		pv = p;
		force = f;
	}

}

zombie::~zombie()
{
    cout<< nom << " est clakos."<< endl;
}

void zombie::AttaqueZombie(zombie *cible)
{
    cout << getNom() << " attaque " << cible->getNom() << endl;
    cible->setPv(cible->getPv() - getForce());
}

void zombie::ShowInfos()
{
	cout << "Je me nomme : " << getNom() << endl;
	cout << "Mes PV : " << getPv() << endl;
	cout << "Ma force est de : " << getForce() << endl;
}

//GETTER/SETTER Pv

void zombie::setPv(int p)
{
	if (p > 100 || p < 0)
	{
		cerr << "pv non autorise" << endl;
		pv = 0;
	}
	else
	{
		pv = p;
	}
}

int zombie::getPv() const
{
	return pv;
}

//GETTER/SETTER Nom

string zombie::getNom() const
{
	return nom;
}

void zombie::setNom(string n)
{
	nom = n;
}

//GETTER/SETTER Force

int zombie::getForce() const
{
	return force;
}

void zombie::setForce(int f)
{
	if (f < 0)
	{
		force = 0;
	}
	else
	{
		force = f;
	}
}
