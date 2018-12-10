#ifndef _AGENT_
#define _AGENT_

class agent
{
private:
    int age;
    int x;
    int y;
    double thrsh_move;
    int limit_stomach;

public:
    agent(int x, int y);
    virtual ~agent();

    int getX();
    int getY();
    int stomach;

    void move();
    void eat();
};
#endif // _AGENT_

#ifndef _FEMALE_
#define _FEMALE_

class female : public agent
{
public:
    female();
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