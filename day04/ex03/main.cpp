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
    AMateria* mat;
    AMateria* mat2;
    AMateria* mat3;
    mat = src->createMateria("ice");
    moi->equip(mat);
    mat2 = src->createMateria("cure");
    mat3 = mat2->clone();
    moi->equip(mat2);
    moi->equip(mat3);

    ICharacter* bob = new Character("bob");

    std::cout << "mat " << mat->getXP() << std::endl;
    std::cout << "mat2 " << mat2->getXP() << std::endl;
    std::cout << "mat3 " << mat3->getXP() << std::endl;
    moi->use(0, *bob);
    std::cout << "mat " << mat->getXP() << std::endl;
    std::cout << "mat2 " << mat2->getXP() << std::endl;
    std::cout << "mat3 " << mat3->getXP() << std::endl;
    moi->use(1, *bob);
    std::cout << "mat " << mat->getXP() << std::endl;
    std::cout << "mat2 " << mat2->getXP() << std::endl;
    std::cout << "mat3 " << mat3->getXP() << std::endl;
    moi->use(2, *bob);
    std::cout << "mat " << mat->getXP() << std::endl;
    std::cout << "mat2 " << mat2->getXP() << std::endl;
    std::cout << "mat3 " << mat3->getXP() << std::endl;

    moi->unequip(2);
    moi->use(2, *bob);
    std::cout << "mat3 " << mat3->getXP() << std::endl;
    moi->unequip(1);
    moi->use(1, *bob);
    std::cout << "mat2 " << mat2->getXP() << std::endl;
    moi->unequip(0);
    moi->use(0, *bob);
    std::cout << "mat " << mat->getXP() << std::endl;
    moi->unequip(4);
    moi->unequip(5);


    delete bob;
    delete moi;
    delete src;
    delete mat;
    delete mat2;
    delete mat3;
    return 0;
}