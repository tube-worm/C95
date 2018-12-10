#include <iostream>
#include "classdef.hpp"

using namespace std;

int main()
{
    vector<female> female_vector (20);
    vector<gentleman> gentle_vector (10);
    vector<raper> raper_vector(10);

    female hoge(1,2);
    cout << hoge.getX() << hoge.getY() << endl;
    
    hoge.move(4, -6);
    cout << hoge.getX() << hoge.getY() << endl;
    
    return 0;
}
/*
***ToDo
makechild に vector 渡して新しいの付け加える
search に vector を渡すように変更
eat でfieldのfoodが減るように変更
TIMESTEP関数の実装
    vector　を走査、餌を食う、ageの更新、死ぬ
    vector を再度走査、サーチと移動
    交尾
*/