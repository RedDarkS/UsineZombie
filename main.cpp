#include "zombie.h"
#include "Bomber.h"
#include "Rapace.h"
#include "Tank.h"
#include "Mage.h"
#include "Fusion.h"

int main()
{
    srand(time(NULL));

	zombie z1;
	z1.setNom("Phillipe");
	z1.ShowInfos();

	zombie z2("Louis", 100, 10);
	z2.ShowInfos();

    z2.AttaqueZombie(&z1);
    z1.ShowInfos();

	Bomber b1;
	b1.setNom("Bommi");
	b1.ShowInfos();
	b1.Kamikaze(z1);

	Rapace r1;
	r1.setNom("Piaf");
	r1.ShowInfos();
    r1.AttaqueRapide(b1);

	Tank t1;
	t1.setNom("Caillou");
	t1.ShowInfos();
	t1.Charge(r1);

	Mage m1;
	m1.setNom("Magi");
	m1.ShowInfos();

	Fusion f1;
	t1.setNom("Fusible");
	f1.ShowInfos();

	z1.setNom("Jean");
	z1.setPv(500);
	z1.setForce(50);
	z1.ShowInfos();
	cout << endl;

    return 0;
}
