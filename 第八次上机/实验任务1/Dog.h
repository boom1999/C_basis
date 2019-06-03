#pragma once
class Dog
{
private:
    float m_weight;
    int m_age;
public:
    float getweight ();
    int getage ();
    void setweight (float weight);
    void setage (int age);
    Dog ();
    Dog (float weight,int age);
    Dog (const Dog& exdog);
    ~Dog ();
};

