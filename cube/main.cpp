#include "cube.h"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main(){
	iit::Cube c;
	double a;
	cout << "Enter side of cube: ";
	cin >> a;
   
	c.setLength(a);
	double volume = c.getVolume();
	cout<< "Volume: " << volume << endl;
	
	double surfaceArea = c.getSurfaceArea();
	cout<< "surface area: " << surfaceArea << endl;
	

	return 0;
}
