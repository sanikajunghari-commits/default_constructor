#include <iostream>

using namespace std;
class  Rectangle
{
     float length;
     float breath;

     public:
    Area()
    {
        cout<<"The area of rectangle = "<<(length*breath)<<endl;
    }

    Rectangle(float l, float b)
    {
        length = l;
        breath = b;
    }

};

int main()
{
    Rectangle r1(4,5),r2(5,8);
    r1.Area();
    r2.Area();

    return 0;
}
