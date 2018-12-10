#include "classdef.hpp"
#include <iostream>

using namespace std;

female::female(int x, int y)
{
    coord_x = x;
    coord_y = y;

    thrsh_move = 0.3;
}

female::~female()
{
    cout << "female destructer!" << endl;
}