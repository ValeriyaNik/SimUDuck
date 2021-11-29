#include "rubberduck.h"

RubberDuck::RubberDuck() {
    this->flyBehavior = new FlyNoWay();
    this->quackBehavior = new Squeak();
}

void RubberDuck::display() {
    cout << "I'm Rubber Duck" << endl;
}
