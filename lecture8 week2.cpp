#include <iostream>
using namespace std;

class MyClass {
  public:
    void setValue(int value) {
      this->value = value;
    }
    
    int getValue() {
      return this->value;
    }
    
  private:
    int value;
};

int main() {
  MyClass obj;
  obj.setValue(42);
  cout << "The value is: " << obj.getValue() << endl;
  
  return 0;
}
