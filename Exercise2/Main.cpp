/******************************************************************************

Exercise: create a class with multiple constructors.

Write a program that iterates a class named dummy that:
-has an int variable as private member named x
-has two constructors
  -one without arguments that inits the var x to 0
  -one with argument the value that the var x will take
-has accessors
-has a destructor
   -with a simple message informs that destructs the object with the value of var x
- a main function that
- declares two dummy objects
 -one inits var x to 10 (via constructor)
 -one that doesnt init var x
*******************************************************************************/


#include <iostream>
using namespace std;

class dummy {
public:
	dummy();
	dummy(int in_x);
	~dummy();
	void set_x(int in_x);
	int get_x() const;

private:
	int x;
};
int main()

{
	dummy ob1(10); 
	dummy ob2;
	return 0;
}

dummy::dummy()
{
	x = 0;
}

dummy::dummy(int in_x)
{
	x = in_x;
}

void dummy::set_x(int in_x)
{
	x = in_x;
}

int dummy::get_x() const
{
	return x;
}

dummy::~dummy()
{
	cout << "Destructing with x=" << x << endl;
}