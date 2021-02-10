#ifndef TANK_H
#define TANK_H

#include <zombie.h>


class Tank : public zombie
{
    public:
        Tank();
        ~Tank();

        void Charge(zombie *cible);

        int getArmor() const;
        void setArmor(int a);

    protected:

    private:
        int armor = 50;
};

#endif // TANK_H
