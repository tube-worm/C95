#include <iostream>
#include "classdef.hpp"

using namespace std;

int main()
{
    female hoge(1,2);
    cout << hoge.getX() << hoge.getY() << endl;
    
    hoge.move(4, -6);
    cout << hoge.getX() << hoge.getY() << endl;
    
    return 0;
}