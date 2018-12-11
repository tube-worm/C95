#include "classdef.hpp"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

male::male()
{
    thrsh_move = THRSH_MOVE_MALE;
}

void male::search_female()
{

}

void male::make_child(string parent, field field)
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

gentleman::gentleman()
{
    k_punish = K_PUNISH;
}

gentleman::gentleman(int x, int y)
{
    coord_x = x;
    coord_y = y;
    k_punish = K_PUNISH;
}

void gentleman::present(field field)
{
    if(stomach >= PRESENT_QUANTITY)
    {
        stomach -= PRESENT_QUANTITY;

        double r = (double)rand() / RAND_MAX;
        if(r > SUCCESS_RATE_GENTLE)
            make_child("gentleman", field);
    }
}

raper::raper()
{

}

raper::raper(int x, int y)
{
    coord_x = x;
    coord_y = y;
}

void raper::rape(field field)
{
    double r = (double)rand() / RAND_MAX;
    if(r > SUCCESS_RATE_RAPER)
        make_child("raper", field);
    cout << "RAPE!" << endl;
}