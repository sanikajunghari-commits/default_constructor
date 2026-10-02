#include <iostream>

using namespace std;
class Students
{
    string name,address;
    int age;

    public:
    Students()
    {
        name = "Unknown";
        age = 0;
        address = "Not available";
    }

    void setInfo(string n , int a)
    {
        Students();
        name = n;
        age = a;
    }

    void setInfo(string n, int a,string ad)
    {
        Students();
        name = n;
        age = a;
        address = ad;
    }
     void show()
     {
         cout<<"Name = "<<name<<endl;
         cout<<"Age = "<<age <<endl;
         cout<<"Address = "<<address<<endl;
     }




};

int main()
{



   // Students s[10];
    int age,n;
    string name;
    string address;
    cout<<"Number of students : ";
    cin>>n;
    cout<<endl;
    Students s[n];


    for(int i=0;i<n;i++)
    {

        cout<<"Enter Name : ";
        cin>>name;

        cout<<"Age : ";
        cin>>age;

        cout<<"Address : ";
        cin>>address;

        s[i].setInfo(name,age,address);

        s[i].show();

    }




    return 0;
}
