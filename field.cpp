#include "classdef.hpp"
#include <iostream>

using namespace std;

field::field()
{
    food_vector = vector<vector<int>>(n, vector<int>(m,10));
}

field::~field()
{
    cout << "deconstruct field!" << endl;
}