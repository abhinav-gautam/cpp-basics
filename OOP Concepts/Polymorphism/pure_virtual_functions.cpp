#include <iostream>
using namespace std;

// This is a abstract class as it has only pure virtual function (Same working as interface in java)
class Car
{
public:
    // This are pure virtual functions and must be implemented by the child classes
    virtual void start() = 0;
    virtual void stop() = 0;
};

class Zen : public Car
{
    void start()
    {
        cout << "Zen started" << endl;
    }
    void stop()
    {
        cout << "Zen stopped" << endl;
    }
};

class Amaze : public Car
{
    void start()
    {
        cout << "Amaze started" << endl;
    }
    void stop()
    {
        cout << "Amaze stopped" << endl;
    }
};

int main()
{
    // Runtime Polymorphism
    Car *car = new Zen;
    car->start();
    car->stop();
    car = new Amaze;
    car->start();
    car->stop();
}