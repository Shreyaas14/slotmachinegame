#include <iostream>
#include <cmath>
#include <ctime>
#include "SlotMachine.h"
#include "Reel.h"
#include "Player.h"

using namespace std;

int main()
{
    cout << "Welcome to Slot Machine! Enter your amount of starting money: " << endl;
    float starting_money;
    cin >> starting_money;
    if(starting_money > 0)
    {
        game(starting_money);
    }
    else 
    {
        cout << "This number was negative! You cannot bet negative money." << endl;
    }


    return 0;
}

void game(int money)
{
    SlotMachine machine(3);
    Player one();
    one().set_total_money(money);

    cout << "Press 'y' to pull the lever!" << endl;

    char choice;
    cin >> choice;

    while(choice == 'y')
    {
        machine.pull_lever();
        vector<string> image = machine.slot_skeleton();
        if(machine.reel() == )

    }



}
