#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter* moi = new Character("moi");
    AMateria* tmp;
    AMateria* tmp2;
    AMateria* tmp3;
    tmp = src->createMateria("ice");
    moi->equip(tmp);
    tmp2 = src->createMateria("cure");
    tmp3 = src->createMateria("cure");
    moi->equip(tmp2);
    moi->equip(tmp3);

    ICharacter* bob = new Character("bob");

    std::cout << "tmp " << tmp->getXP() << std::endl;
    std::cout << "tmp2 " << tmp2->getXP() << std::endl;
    std::cout << "tmp3 " << tmp3->getXP() << std::endl;
    moi->use(0, *bob);
    std::cout << "tmp " << tmp->getXP() << std::endl;
    std::cout << "tmp2 " << tmp2->getXP() << std::endl;
    std::cout << "tmp3 " << tmp3->getXP() << std::endl;
    moi->use(1, *bob);
    std::cout << "tmp " << tmp->getXP() << std::endl;
    std::cout << "tmp2 " << tmp2->getXP() << std::endl;
    std::cout << "tmp3 " << tmp3->getXP() << std::endl;
    moi->use(2, *bob);
    std::cout << "tmp " << tmp->getXP() << std::endl;
    std::cout << "tmp2 " << tmp2->getXP() << std::endl;
    std::cout << "tmp3 " << tmp3->getXP() << std::endl;

    moi->unequip(2);
    moi->use(2, *bob);
    std::cout << "tmp3 " << tmp3->getXP() << std::endl;
    moi->unequip(1);
    moi->use(1, *bob);
    std::cout << "tmp2 " << tmp2->getXP() << std::endl;
    moi->unequip(0);
    moi->use(0, *bob);
    std::cout << "tmp " << tmp->getXP() << std::endl;
    moi->unequip(4);
    moi->unequip(5);


    delete bob;
    delete moi;
    delete src;
    delete tmp;
    delete tmp2;
    delete tmp3;
    return 0;
}