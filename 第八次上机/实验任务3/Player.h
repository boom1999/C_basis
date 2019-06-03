#pragma once
#include<string>
using namespace std;
class Player
{
private:
    string m_ID;
    string m_nickname;
    int m_capacityValue;
public:
    void setID (string ID);
    void setname (string name);
    void setcaValue (int caValue);
    string getID ();
    string getname ();
    int getcaValue ();
    void playing ();
    Player (string ID, string nickname, int capacityValue);
    Player (const Player& explayer);
    Player ();
    ~Player ();
};

