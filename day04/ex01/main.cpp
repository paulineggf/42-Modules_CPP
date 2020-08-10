#include "AWeapon.hpp"
#include "Character.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

int main()
{
	Character* moi = new Character("moi");
	std::cout << *moi;
	Enemy* b = new RadScorpion();
	Enemy* c = new SuperMutant();
	
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);
	moi->attack(b);
	std::cout << b->getType() << " has " << b->getHP() << " HP" << std::endl;
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	std::cout << std::endl;
	
	while (b->getHP() > 0)
	{
		moi->attack(b);
		std::cout << b->getType() << " has " << b->getHP() << " HP" << std::endl;
		std::cout << *moi;
		if (moi->getAP() < moi->getWeapon()->getAPCost())
			moi->recoverAP();
	}
	std::cout << b->getType() << " is dead and has " << b->getHP() << " HP" << std::endl;
	std::cout << std::endl;
	
	while (c->getHP() > 0)
	{
		moi->attack(c);
		std::cout << c->getType() << " has " << c->getHP() << " HP" << std::endl;
		std::cout << *moi;
		if (moi->getAP() < moi->getWeapon()->getAPCost())
			moi->recoverAP();
	}
	std::cout << c->getType() << " is dead and has " << c->getHP() << " HP" << std::endl;
	std::cout << std::endl << std::endl;
	
	delete moi;
	delete b;
	delete c;
	delete pr;
	delete pf;
	return 0;
}
