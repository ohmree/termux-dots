#include <iostream>
#include "ncurses.hpp"

int
main()
{
    ncurses::init();
    auto player = new Player();

    cout << player.health << endl;

    ncurses::cleanup();
    return 0;
}

