#include "classdef.hpp"
#include <iostream>

using namespace std;

gentleman::gentleman(int x, int y)
{
    coord_x = x;
    coord_y = y;
    thrsh_move = 0.5;
    k_punish = 0.3;
}

gentleman::~gentleman()
{
    cout << "gentleman destructer!" << endl;
}

void gentleman::present()
{
    stomach -= 20;
}