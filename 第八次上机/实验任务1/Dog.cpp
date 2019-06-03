#include "Dog.h"



float Dog::getweight ()
{
    return m_weight;
}

int Dog::getage ()
{
    return m_age;
}

void Dog::setweight (float weight)
{
    m_weight = weight;
}

void Dog::setage (int age)
{
    m_age = age;
}

Dog::Dog ()
{
}

Dog::Dog (float weight, int age)
{
    m_weight = weight;
    m_age = age;
}

Dog::Dog (const Dog& exdog)
{
    m_weight = exdog.m_weight;
    m_age = exdog.m_age;
}


Dog::~Dog ()
{
}
