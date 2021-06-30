class Test
{
    int x = 10;
    int y = 20;

public:
    Test(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    // Constructor Delegation - One constructor can call other constructor
    Test() : Test(1, 1)
    {
    }
};