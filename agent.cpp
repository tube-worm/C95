#include "classdef.hpp"
#include <iostream>

using namespace std;

agent::agent()
{
    age = 0;
    stomach = 10;
    limit_stomach = 50;
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

void agent::eat(int food)
{
    stomach += food;
}

void agent::get_old()
{
    age += 1;
}
