#include <iostream>
#include "classdef.hpp"

using namespace std;

int main()
{
    field field;

    for(int i= 0; i < field.female_vector.size(); i++)
    {
        female fe = field.female_vector[i];
        cout << fe.getX() << "," << fe.getY() << endl;
    }

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