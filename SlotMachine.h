#ifndef SLOT_MACHINE_H
#define SLOT_MACHINE_H
#include <string>
#include <vector>
#include <random>
#include "Reel.h"

class SlotMachine 
{
    private:
        std::vector<Reel> reels;  
    public:
        SlotMachine(int n);
        void spin();
        std::string get_curr_symbol() const;  
};

#endif
