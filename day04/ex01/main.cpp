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
	std::cout << std::endl;
	
	while (1)
	{
		moi->attack(b);
		std::cout << b->getType() << " has " << b->getHP() << " HP" << std::endl;
		if (b->getHP() == 0)
		{
			b = NULL;
			break ;
		}
		std::cout << *moi;
		if (moi->getAP() < moi->getWeapon()->getAPCost())
			moi->recoverAP();
	}
	std::cout << std::endl;
	moi->equip(pf);
	std::cout << *moi;
	std::cout << std::endl;	
	while (1)
	{
		moi->attack(c);
		std::cout << c->getType() << " has " << c->getHP() << " HP" << std::endl;
		if (c->getHP() == 0)
		{
			c = NULL;
			break ;
		}
		std::cout << *moi;
		if (moi->getAP() < moi->getWeapon()->getAPCost())
			moi->recoverAP();
	}
	std::cout << std::endl << std::endl;
	
	delete moi;
	delete pr;
	delete pf;
	return 0;
}

// int main()
// {
// 	Character* moi = new Character("moi");
// 	std::cout << *moi;
// 	Enemy* b = new RadScorpion();
// 	AWeapon* pr = new PlasmaRifle();
// 	AWeapon* pf = new PowerFist();
// 	moi->equip(pr);
// 	std::cout << *moi;
// 	moi->equip(pf);
// 	moi->attack(b);
// 	std::cout << *moi;
// 	moi->equip(pr);
// 	std::cout << *moi;
// 	moi->attack(b);
// 	std::cout << *moi;
// 	moi->attack(b);
// 	std::cout << *moi;
// 	return 0;
// }