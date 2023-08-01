#include <iostream>
using namespace std;

class three_d {
    int x, y, z;
    public:
        three_d()
            { x= y = z = 0; }
        three_d(int i, int j, int k)
            {x = i; y = j; z = k; }
        friend three_d operator +(three_d op1, three_d op2);
        three_d operator =(three_d op2); //op1 is implied
        void show();
};

//This is now a friend function.
three_d operator+(three_d op1, three_d op2){
    three_d temp;
    temp.x = op1.x + op2.x;
    temp.y = op1.x + op2.y;
    temp.z = op1.z + op2.z;
    return temp;
}
//Overload +
three_d three_d::operator+(three_d op2){
    three_d temp;
    temp.x = x + op2.x;
    temp.y = y + op2.y;
    temp.z = z + op2.z;
    return temp;
}
//Overload assignment
three_d three_d::operator=(three_d op2){
    x = op2.x; //These are integr assignments
    y = op2.y; //and the + retains its original
    z = op2.z; //meaning relative to them
    return *this;
}
//Overload the postfix version of ++
three_d three_d::operator++(int){
    three_d temp = *this; //save original value
    x++; y++; z++; //increment x, y and z
    return temp; //return original value
}
//Overload the prefix version of ++.
three_d three_d::operator++(){
    x++; y++; z++; //increment x, y and z
    return *this; //return altered value
}
//Show X, Y and Z coordinates
void three_d::show(){
    cout << x << ", ";
    cout << y << ", ";
    cout << z << "\n";
}

int main()
{
    three_d a(1, 2, 3), b(10, 10, 10), c;
    a.show(); //1
    b.show(); //2
    c = a + b; // add a and b together
    c.show(); //3
    c = a + b + c; //add a, b and c together
    c.show(); //4
    c = b = a; //demonstrate multiple assignment
    c.show(); //5
    b.show(); //6
    ++c; //prefix increment
    c.show(); //7
    c++; //postfix increment
    c.show(); //8
    a = ++c; // a receives c's value after increment
    a.show(); //9
    c.show(); //10
    a = c++; //a receives c's value prior to increment
    a.show(); //11
    c.show(); //12
    return 0;
}