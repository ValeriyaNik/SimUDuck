#include "redheadduck.h"

RedheadDuck::RedheadDuck() {
    flyBehavior = new FlyWithWings();
    quackBehavior = new Quack();
}

void RedheadDuck::display() {
    cout << "I'm Redhead Duck" << endl;
}
