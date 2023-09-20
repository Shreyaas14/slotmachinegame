#include <iostream>
#include <ctime>
#include <random>
#include <vector>

/*
Class for each player in a game. 
*/
using namespace std;

class Player
{
    private:
        int total_money;

    public:
        Player()
        {
            int total_money;
        } 

        int get_total_money()
        {
            return total_money;
        }

        int set_total_money(int money)
        {
            total_money = money;
        }
}
