#include "duck.h"

Duck::Duck()
{

}

void Duck::swim() {
    cout << "Float" << endl;
}

void Duck::performFly() {
    flyBehavior->fly();
}

void Duck::performQuack() {
    quackBehavior->quack();
}
