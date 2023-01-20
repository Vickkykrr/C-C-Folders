#include<iostream>

using std :: cout;

int Call(int sum, int add)
{
    int result = sum + add;
    return result;
}

int main()
{
    int a=10,b=20;
    int (*Pointer)(int,int)=&Call; // (Can be executed without &,*) 
    cout << "Value of the operation done in function pointer\n " <<(*Pointer)(a,b);  
}
