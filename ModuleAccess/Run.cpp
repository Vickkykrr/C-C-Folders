#include "Link2.hpp"
#include "Link1.hpp"
#include <iostream>

int main()
{
    int firstVal;
    int secondVal;

    std :: cout << "ENTER THE VALUES\n";
    std :: cin >> firstVal >> secondVal;

     //Access2 obj2;
    Access1 *obj1 =new Access2();

    std :: cout << "Class Access1 : " << std :: endl;
     //  << "Digit : " << obj1->digit  << std :: endl;

    obj1->Swap(firstVal, secondVal);

     // std :: cout << "Class Access2 : " << endl
     //      << "DigitVal : " << obj1->digitVal << endl;

    //obj1->Swap(firstVal, secondVal);
}
