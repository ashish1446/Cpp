#pragma once

namespace iit {
class Cube{
     public:
	double getVolume();
	double getSurfaceArea();
	void setLength(double length);

     private:
        double length_;
};
}	
	
