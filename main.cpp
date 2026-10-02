#include <iostream>

using namespace std;
class Programming
{
    string name;
    public:
    Programming()
    {
        cout<<"I love programming language. "<<endl;

    }

    Programming(string name)
    {
        cout<<"I love "<<name<<"."<<endl;
    }
};

int main()
{


    //Programming p;
    Programming p1("Shinchan");

    return 0;
}
