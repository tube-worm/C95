#include "classdef.hpp"
#include <iostream>

using namespace std;

agent::agent(int x, int y)
{
    age = 0;
    x = x;
    y = y;
    cout << "construct an agent!" << endl;
}

