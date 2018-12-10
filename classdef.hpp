#include <string>
#include <vector>

#define K_PUNISH 0.3
#define PRESENT_QUANTITY 20
#define THRSH_MOVE_MALE 0.5
#define THRSH_MOVE_FEMALE 0.3
#define SUCCESS_RATE_RAPER 0.3
#define SUCCESS_RATE_GENTLE 0.5

#ifndef _FIELD_
#define _FIELD_

class field
{
private:
    int n=10000;
    int m=10000;

public:
    field();
    virtual ~field();
    vector<vector<int>> food_vector;
};
#endif // _FIELD_

#ifndef _AGENT_
#define _AGENT_

class agent
{
private:
    int age;
    int limit_stomach;

public:
    agent();
    virtual ~agent();

    int coord_x;
    int coord_y;
    int stomach;
    double thrsh_move;

    int getX();
    int getY();

    void move(int x_change, int y_change);
    void eat(int food);
    void get_old();
};
#endif // _AGENT_

#ifndef _FEMALE_
#define _FEMALE_

class female : public agent
{
public:
    female(int x, int y);
    virtual ~female();
};
#endif // _FEMALE_

#ifndef _MALE_
#define _MALE_

class male : public agent
{
public:
    male();
    virtual ~male();
    
    void search_female();
    void make_child(string parent);
};
#endif // _MALE_

#ifndef _GENTLEMAN_
#define _GENTLEMAN_

class gentleman : public male
{
private:
    double k_punish;

public:
    gentleman(int x, int y);
    virtual ~gentleman();
    void present();
};
#endif // _GENTLEMAN_

#ifndef _RAPER_
#define _RAPER_

class raper : public male
{
public:
    raper(int x, int y);
    virtual ~raper();
    void rape();
};
#endif // _RAPER_