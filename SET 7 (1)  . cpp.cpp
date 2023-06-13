#include<iostream>
#include<string.h>

using namespace std;

class A
{
	public :
		void get()
		{
			cout<<"mother name = anushka sharma"<<endl;
			cout<<"age = 35 years"<<endl;
			
			
		}
};
class B : public A
{
     public :	
     
     void display()
     {
     	cout<<"daughter name = vamika"<<endl;
			cout<<"age = 2 years"<<endl;
	 }
};
int main()
{
	B d;
	
	d.display();
	cout<<"TTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTTT"<<endl;
	d.get();
	return 0;
	
}
