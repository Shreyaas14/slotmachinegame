#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

class Player
{
    private:
        int total_money;
    public:
        Player();
        int get_total_money();
        int set_total_money(int money);
};

#endif
