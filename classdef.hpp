#ifndef _AGENT_
#define _AGENT_

class agent
{
private:
    int age;
    int limit_stomach;
    int stomach;

public:
    agent();
    virtual ~agent();

    int coord_x;
    int coord_y;
    double thrsh_move;

    int getX();
    int getY();

    void move(int x_change, int y_change);
    void eat(int food);
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

#ifndef _GENTLEMAN_
#define _GENTLEMAN_

class gentleman : public agent
{
private:
    double k_punish;

public:
    gentleman();
    virtual ~gentleman();
    void present();
};
#endif // _GENTLEMAN_

#ifndef _RAPER_
#define _RAPER_

class raper : public agent
{
public:
    raper();
    virtual ~raper();
    void rape();
};
#endif // _RAPER_