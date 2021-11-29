#include "decoyduck.h"

DecoyDuck::DecoyDuck()
{
    flyBehavior = new FlyNoWay();
    quackBehavior = new MuteQuack();
}

void DecoyDuck::display() {
    std::cout << "I'am a real Decoy duck" << std::endl;
}
