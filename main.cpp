#include <iostream>
#include "package.h"

using namespace std;

int main(int argc, char* argv[]) {
	Package a;
	TwoDayPackage b(10, 20);
	OvernightPackage c(50);

	cout << "A type = " << a.getType() << " perimeter = " << a.getPerimeter() << " area = " << a.getArea() << "\n";
	cout << "B type = " << b.getType() << " perimeter = " << b.getPerimeter() << " area = " << b.getArea() << "\n";
	cout << "C type = " << c.getType() << " perimeter = " << c.getPerimeter() << " area = " << c.getArea() << "\n";
}