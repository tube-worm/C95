#include "classdef.hpp"
#include <iostream>

using namespace std;

gentleman::gentleman(int x, int y)
{
    coord_x = x;
    coord_y = y;
    k_punish = K_PUNISH;
}

gentleman::~gentleman()
{
    cout << "gentleman destructer!" << endl;
}

void gentleman::present()
{
    if(stomach >= PRESENT_QUANTITY)
    {
        stomach -= PRESENT_QUANTITY;

        double r = (double)rand() / RAND_MAX;
        if(r > SUCCESS_RATE_GENTLE)
            make_child("gentleman");
    }
}