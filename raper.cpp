#include "classdef.hpp"
#include <iostream>

using namespace std;

raper::raper(int x, int y)
{
    coord_x = x;
    coord_y = y;
    thrsh_move = 0.5;
}

raper::~raper()
{
    cout << "raper destructer!" << endl;
}

void raper::rape()
{
    make_child("raper");
    cout << "RAPE!" << endl;
}