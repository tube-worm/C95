#include "classdef.hpp"
#include <iostream>

using namespace std;

female::female()
{
    thrsh_move = THRSH_MOVE_FEMALE;
}

female::female(int x, int y)
{
    coord_x = x;
    coord_y = y;
    thrsh_move = THRSH_MOVE_FEMALE;
}
