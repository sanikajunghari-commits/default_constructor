#include <iostream>

using namespace std;
class Area
{
     int area=0;

     public:
     Area(int ll, int bb)
     {
         area = ll * bb;
         returnArea();

     }

     void returnArea()
     {
         cout<<"Area of  rectangle = "<<area<<endl;
     }
};

int main()
{
    int l,b;
    cout<<"Enter length and breath to calculate area = ";
    cin>>l>>b;
    Area a1(l,b);
    return 0;
}
