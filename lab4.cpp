#include <iostream>
using namespace std;

//UML diagrams
class Quadrilateral
{
    private:
        int x, y;
    public:
        void set_values(int a, int b)
        {
            x = a;
            y = b;
        }

        float area()
        {
            return (x * y);
        }
};

int main()
{
    float square_area, rectangle_area;
    Quadrilateral square, rectangle; //create 2 objects of the Quadrilateral
    
    //Accessing the number functions
    square.set_values(4, 4);
    square_area = square.area();
    cout << "\n\nArea of the square is: " << square_area << " squared units\n\n";

    rectangle.set_values(7, 10);
    rectangle_area = rectangle.area();
    cout << "Area of the rectangle is: " << rectangle_area << " squared units\n\n";

    return 0;
}