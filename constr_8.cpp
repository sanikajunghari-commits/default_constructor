#include <iostream>

using namespace std;
class Area
{
    double l,b;

    public:
    Area(double ll)
    {
        cout<<"The area of square = "<<(ll*ll)<<endl;
    }


    Area(double ll , double bb)
    {
        cout<<"The area of rectangle = "<<(ll*bb)<<endl;
    }
};

int main()
{
    Area a1(5),a2(4,5);
    return 0;
}
