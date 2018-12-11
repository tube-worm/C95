#include "classdef.hpp"
#include <iostream>
#include <algorithm>

using namespace std;

// FIELD
field::field()
{
    food_vector = vector< vector<int> >(FIELD_SIZE, vector<int>(FIELD_SIZE,10));
    
    for(int i = 0; i < INITIAL_NUM; i++)
    {
        female f;
        female_vector.push_back(f);

        if(i < INITIAL_NUM / 2)
        {
            gentleman g;
            gentle_vector.push_back(g);
        }
        else
        {
            raper r;
            raper_vector.push_back(r);
        }
    }
 }

// AGENT
agent::agent()
{
    age = 0;
    stomach = 10;
    limit_stomach = 50;

    coord_x = rand() % FIELD_SIZE;
    coord_y = rand() % FIELD_SIZE;
    cout << "construct an agent! at"<< coord_x << "," << coord_y << endl;
}

agent::~agent()
{

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

// FEMALE
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

// MALE
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

// GENTLEMAN
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

//RAPER
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