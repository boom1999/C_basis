#pragma once
class Shape
{
public:
    virtual double getArea () = 0;
    virtual double getPerim () = 0;
    Shape ();
    virtual ~Shape ();
};
