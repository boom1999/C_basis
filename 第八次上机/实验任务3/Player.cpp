#include "Player.h"



Player::Player ()
{
    m_ID = "000001";
    m_nickname = "boom";
    m_capacityValue = 99999;
}


Player::~Player ()
{
}

void Player::setID (string ID)
{
    m_ID = ID;
}

void Player::setname (string name)
{
    m_nickname = name;
}

void Player::setcaValue (int caValue)
{
    m_capacityValue = caValue;
}

string Player::getID ()
{
    return string (m_ID);
}

string Player::getname ()
{
    return string (m_nickname);
}

int Player::getcaValue ()
{
    return m_capacityValue;
}

void Player::playing ()
{
    m_capacityValue++;
}

Player::Player (string ID, string nickname, int capacityValue)
{
    m_ID = ID;
    m_nickname = nickname;
    m_capacityValue = capacityValue;
}

Player::Player (const Player& explayer)
{
    m_ID = explayer.m_ID;
    m_capacityValue = explayer.m_capacityValue;
    m_nickname = explayer.m_nickname;
}
