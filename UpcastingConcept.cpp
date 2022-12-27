#include<iostream>

using namespace std;

class Base
{
    virtual public:
        void call()
        {
            cout<< "trial";
        }
};

class Extract :public Base
{
    public:
        void calls()
        {
            cout<<"Error";
        }
};
int main()
{
    Base *b = new Extract();
    b->calls(); 
}