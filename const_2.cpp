#include <iostream>

using namespace std;



    class Triangle
    {
        double a,b,c,h;
       // double area,peri;
        public:
        Triangle(double aa, double bb, double cc,double hh )
        {
           a = aa;
           b = bb;
           c = cc;
           h = hh;
        }

        area()
        {
            cout<<"The area of triangle is = "<<((0.5)*b*h)<<endl;
        }

        perimeter()
        {
            cout<<"The perimeter of triangle = "<<(a+b+c)<<endl;
        }

    };

    int main()
    {

     //cout<<"Enter three sides and height of triangle ";
    // cin>>
    Triangle t(3,4,5,6);
    t.area();
    t.perimeter();



    return 0;
}
