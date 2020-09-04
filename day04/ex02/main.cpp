#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"

int     main(void)
{
    ISpaceMarine* bob = new TacticalMarine;
    ISpaceMarine* jim = new AssaultTerminator;
    ISpaceMarine* paul;
    paul = bob->clone();
    ISquad* vlc = new Squad;
    vlc->push(bob);
    vlc->push(jim);
    vlc->push(paul);
    vlc->push(paul);
    vlc->push(NULL);
    for (int i = 0; i < vlc->getCount(); ++i)
    {
        ISpaceMarine* cur = vlc->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    std::cout << std::endl;
    Squad *test = new Squad;
    std::cout << std::endl;
    test->push(bob);
    test->push(jim);
    test->push(paul);
    test->push(paul);
    test->push(NULL);

    std::cout << std::endl;

    ISquad *copy_squad = new Squad(*test);
    (void)copy_squad;

    delete test;

    std::cout << std::endl;
    
    std::cout << copy_squad->getCount() <<  std::endl;


    for (int i = 0; i < copy_squad->getCount(); ++i)
    {
        ISpaceMarine* cur = copy_squad->getUnit(i);
        cur->battleCry();
        cur->rangedAttack();
        cur->meleeAttack();
    }

    delete copy_squad;

    return 0;
}

// int main(void)
// {
//     ISpaceMarine* bob = new TacticalMarine;
//     ISpaceMarine* jim = new AssaultTerminator;
//     ISquad* vlc = new Squad;
//     vlc->push(bob);
//     vlc->push(jim);
//     for (int i = 0; i < vlc->getCount(); ++i)
//     {
//     ISpaceMarine* cur = vlc->getUnit(i);
//     cur->battleCry();
//     cur->rangedAttack();
//     cur->meleeAttack();
//     }
//     delete vlc;
//     return 0;   
// }