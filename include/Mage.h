#ifndef MAGE_H
#define MAGE_H

#include <zombie.h>


class Mage : public zombie
{
    public:
        Mage();
        ~Mage();

        void sortUNIQUE(zombie *cible);

    protected:

    private:
        bool cooldown = false;
};

#endif // MAGE_H
