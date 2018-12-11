#include <string>
#include <vector>

#define K_PUNISH 0.3
#define PRESENT_QUANTITY 20
#define THRSH_MOVE_MALE 0.5
#define THRSH_MOVE_FEMALE 0.3
#define SUCCESS_RATE_RAPER 0.3
#define SUCCESS_RATE_GENTLE 0.5
#define FIELD_SIZE 1000
#define INITIAL_NUM 20

using namespace std;

class field;

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
    female();
    female(int x, int y);
};
#endif // _FEMALE_

#ifndef _MALE_
#define _MALE_

class male : public agent
{
public:
    male();
    
    void search_female();
    void make_child(string parent, field field);
};
#endif // _MALE_

#ifndef _GENTLEMAN_
#define _GENTLEMAN_

class gentleman : public male
{
private:
    double k_punish;

public:
    gentleman();
    gentleman(int x, int y);
    void present(field field);
};
#endif // _GENTLEMAN_

#ifndef _RAPER_
#define _RAPER_

class raper : public male
{
public:
    raper();
    raper(int x, int y);
    void rape(field field);
};
#endif // _RAPER_

#ifndef _FIELD_
#define _FIELD_

class field
{
private:

public:
    field();
    vector< vector<int> > food_vector;

    vector<female> female_vector;
    vector<gentleman> gentle_vector;
    vector<raper> raper_vector;
};
#endif // _FIELD_
