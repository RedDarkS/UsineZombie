#ifndef FUSION_H
#define FUSION_H

#include <zombie.h>


class Fusion : public zombie
{
    public:
        Fusion();
        ~Fusion();

        void Absorption(zombie *cible);

    protected:

    private:
};

#endif // FUSION_H
