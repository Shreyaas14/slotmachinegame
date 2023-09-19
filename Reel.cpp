#include <iostream>
#include <ctime>
#include <random>
#include <vector>

/*
Class for each reel of the slot machine. Responsible for reel objects and properties of each reel. 
*/
using namespace std;

class Reel
{
    private:
        vector<string> symbols;
        string curr_symbol;

    public:
        Reel()
        {
            symbols.push_back("Cherry");
            symbols.push_back("Orange");
            symbols.push_back("Banana");
        }

        void spin()
        {
            random_device rd; 
            mt19937 gen(rd());
            uniform_int_distribution<> distr(0, symbols.size() - 1);
            curr_symbol = symbols[distr(gen)];
        }

        string get_curr_symbol() const
        {
            return curr_symbol;
        }
};