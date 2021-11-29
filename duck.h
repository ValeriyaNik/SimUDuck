#ifndef DUCK_H
#define DUCK_H

#include <iostream>
#include "flybehavior.h"
#include "quackbehavior.h"

using namespace std;

class Duck
{
public:
    FlyBehavior* flyBehavior;
    QuackBehavior* quackBehavior;
    Duck();
    void swim();
    virtual void display() = 0;
    void performFly();
    void performQuack();
};

#endif // DUCK_H
