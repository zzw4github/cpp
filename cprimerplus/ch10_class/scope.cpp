#include <iostream>

class Ik
{
private:
	int fuss; // fuss has class scope
public:
	Ik(int f = 9) {fuss = f; } // fuss is in scope
	void ViewIk() const; // ViewIk has class scope
};

void Ik::ViewIk() const //Ik:: places ViewIk into Ik scope
{	
	using std::cout;
	using std::endl;
	cout << fuss << endl; // fuss in scope within class methods
}

int main()
{
	Ik * pik = new Ik;
	Ik ee = Ik(8); // constructor in scope because has class name
	ee.ViewIk(); // class object brings ViewIk into scope
	pik->ViewIk(); // pointer-to-Ik brings ViewIk into scope
}