#include "classdef.hpp"
#include <iostream>
#include <vector>

using namespace std;

field::field()
{
    food_vector = vector< vector<int> >(FIELD_SIZE, vector<int>(FIELD_SIZE,10));
    female_vector = vector<female> (20);
    gentle_vector = vector<gentleman> (10);
    raper_vector = vector<raper> (10);
}
