#ifndef RAPACE_H
#define RAPACE_H

#include <zombie.h>


class Rapace : public zombie
{
    public:
        Rapace();
        ~Rapace();

        void AttaqueRapide(zombie *cible);

    protected:

    private:
};

#endif // RAPACE_H
