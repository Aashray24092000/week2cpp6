#include<iostream>
using namespace std;
class student{
	public:
		string name;
		int id;
		
		void into(){
			cout<<"my name is: "<<name<<endl;
			cout<<"my id is: "<<id<<endl;
		}
};
int main()
{
	student s;
	s.name="asharaya";
	s.id=1;
	return 0;
}