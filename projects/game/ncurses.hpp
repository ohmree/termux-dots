#include <ncurses.h>
namespace ncurses
{
    auto
    init()
    {
        initscr();
    }

    auto
    cleanup()
    {
        endwin();
    }
}
