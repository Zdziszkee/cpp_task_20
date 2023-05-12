//
// Created by Kacper Kuchta on 5/12/23.
//

#ifndef CPP_TASK_20_A_H
#define CPP_TASK_20_A_H
#include <iostream>
class A
{
public:
    A(int value = 0)
            :i(value)
    {}




    A operator--()
    {
        --i;
        return *this;
    }

    A operator--(int)
    {
        A tmp(*this);
        --(*this);
        return tmp;
    }

    A operator++()
    {
        ++i;
        return *this;
    }

    A operator++(int)
    {
        A tmp(*this);
        ++(*this);
        return tmp;
    }



    A operator-(const A& other) const
    {
        return A(this->i - other.i);
    }

    A operator-(int value) const
    {
        return A(this->i - value);
    }

    A operator-()
    {
        return -this->i;
    }

    A operator+(const A& other) const
    {
        return A(this->i + other.i);
    }

    A operator+(int value)
    {
        return A(i + value);
    }

    friend std::ostream& operator<<(std::ostream& out, const A& a)
    {
        out << a.i;
        return out;
    }

private:
    int i = 0;
};
#endif //CPP_TASK_20_A_H
