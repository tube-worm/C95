#include "classdef.hpp"
#include <iostream>

using namespace std;

male::male()
{
    thrsh_move = THRSH_MOVE_MALE;
}

male::~male()
{
    cout << "male destructer!" << endl;
}

void male::search_female()
{

}

void male::make_child(string parent)
{
    if(parent == "gentleman")
    {
        gentleman child = gentleman(coord_x, coord_y);
    }
    else if(parent == "raper")
    {
        raper child = raper(coord_x, coord_y);
    }
    else
    {
        cerr << "error in make_child: parent type is incorrect" <<endl;
    }
}