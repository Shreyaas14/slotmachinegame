#include <iostream>
#include <ctime>
#include <random>
#include <vector>
#include <Reel.h>

/*
Simple casino slot machine game. User can enter a betting amount, and spin a slot machine. If they land 3 of the same row, they win 10x their bet. Otherwise, they lose the betting amount.
Special symbols will be added later. 
*/

class SlotMachine
{
    private:
        vector<string> machine_image;
        vector<Reel> reels;
        int num_reels;

    public:
        SlotMachine(int n)
        {
            num_reels = 3; 
            for(int i = 0; i < num_reels; ++i)
            {
                reels.push_back(Reel());
            } 
        }

        void pull_lever()
        {
            for(int i = 0; i < num_reels; ++i)
            {
                reels[i].spin();
            }
        }

        string show_results() const
        {
            string results;
            for(const auto& reel: reels)
            {
                results + " " + reel.get_curr_symbol();
            }

            return results;
        }

        

};