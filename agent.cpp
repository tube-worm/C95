#include "classdef.hpp"
#include <iostream>

using namespace std;

agent::agent(int x, int y)
{
    age = 0;
    coord_x = x;
    coord_y = y;
    cout << "construct an agent!" << endl;
}

agent::~agent()
{
    cout << "destruct an agent!" << endl;
}

int agent::getX()
{
    return coord_x;
}

int agent::getY()
{
    return coord_y;
}

void agent::move(int x_change, int y_change)
{
    coord_x += x_change;
    coord_y += y_change;
}