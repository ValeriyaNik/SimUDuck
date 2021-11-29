#include "mallardduck.h"

MallardDuck::MallardDuck()
{
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}

void MallardDuck::display() {
    std::cout << "I'am a real Mallard duck" << std::endl;
}
