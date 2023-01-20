#include <iostream>

using namespace std;

class Company
{
public:
    void Simple()
    {
        cout << "Sample is executed";
    }
};

class Sacra :public Company
{
public:
    virtual void Simple()
    {
        cout << "simple is executed";
    }
};

int main()
{

   Company* s=new Sacra();
    s->Simple();
    return 0;
}