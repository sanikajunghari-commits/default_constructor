#include <iostream>

using namespace std;
class AddAmount
{
  double amount = 50 ;

  public:

  AddAmount()
  {

  }

  AddAmount(double m)
  {
      amount+=m;
  }
  show()
  {
      cout<<"The amount in piggie bank = "<<amount<<"$"<<endl;
  }


};

int main()
{
    AddAmount a,a1(5);
    a.show();
    a1.show();

    return 0;
}
