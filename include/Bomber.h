#ifndef BOMBER_H
#define BOMBER_H

#include <zombie.h>


class Bomber : public zombie
{
    public:
        Bomber();
        ~Bomber();

        void Kamikaze(zombie *cible);

    protected:

    private:
};

#endif // BOMBER_H
