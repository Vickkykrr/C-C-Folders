// POLYMORPHISM => Method Overriding
#include "iostream"
using namespace std;
class polymorphism
{
    public : void run()
    {
        cout << "First Statement" << endl;
    }
};

class extract : public polymorphism
{
   public : void run()
    {
        cout << "Second Statement" << endl;
    }
};

int main()
{
    extract sample;
    sample.run();
    sample.run();
}