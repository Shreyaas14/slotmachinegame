#ifndef REEL_H
#define REEL_H
#include <string>
#include <vector>
#include <random>


using namespace std; 

class Reel
{
    private:
        vector<string> symbols;
    public:
        Reel();
        void spin();
        string get_curr_symbol() const;
        
};


#endif