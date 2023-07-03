#include <iostream>
using namespace std;
class cipherschool
{
  private:
  int a=5;
  friend void display(cipherschool);//friend function declaration
};
void display(cipherschool d)//friend function defination
{
  cout<<"a: "<<d.a<<endl;//access of private data
}
int main()
{
  cipherschool d;
  display(d);//calling a friend function
return 0;
}