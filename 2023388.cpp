// reg no 2023388
// name muhammad Awais Ashraf
// section AI(F)
#include <iostream>
using namespace std;

class Area
{
private:
    double length;
    double width;

public:
    // Constructor with no arguments
    Area() : length(20), width(15)
    {
        cout << "Welcome to Area Class." << endl;
    }

    // Copy constructor that adds 5 to both length and width
    Area(const Area &obj)
    {
        length = obj.length + 5;
        width = obj.width + 5;
    }

    // Constructor with two integer arguments
    Area(int l, int w) : length(l), width(w) {}

    // Constructor with two double arguments
    Area(double l, double w) : length(l), width(w) {}

    // Function to calculate the area
    double Calculate()
    {
        return length * width;
    }

    // Function to display the dimensions and area
    void Display()
    {
        cout << "Length: " << length << ", Width: " << width << ", Area: " << Calculate() << endl;
    }
};

int main()
{
    // Using constructor with no arguments
    Area area1;
    area1.Display();

    // Using copy constructor
    Area area2(area1);
    area2.Display();

    // Using constructor with two integer arguments
    Area area3(10, 25);
    area3.Display();

    // Using constructor with two double arguments
    Area area4(12.5, 20.3);
    area4.Display();

    return 0;
}
