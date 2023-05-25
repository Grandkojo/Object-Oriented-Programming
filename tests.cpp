#include <iostream>
using namespace std;

int main(){

    //for loop
    int j;
    for (j = 0; j < 15; j++)
        cout << j * j << " ";
    cout << endl;

    //while loop
    int n = 8;
    while (n != 0)
        cin >> n;
    cout << n << endl;

    //do while loop
    long dividend, divisor;
    char ch;
    do
    {
        cout <<"Enter dividend: "; cin >> dividend;
        cout << "Enter divisor: "; cin >>divisor;
        cout << "Quotient is " << dividend / divisor;
        cout << ", remainder is " << dividend % divisor;
        cout << "\nDo another? (y/n): ";
        cin >> ch;
    } while (ch != 'n');

    //if statement
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x > 100)
        cout << "That number is greater than 100\n";
    else
        cout << "That number is less than 100\n";

    //switch statment
    int speed;
    cout << "Enter 33, 45, or 78: ";
    cin >> speed;
    switch (speed)
    {
        case 33:
                cout << "LP album\n";
            break;
        case 45:
            cout << "Single selection\n";
            break;
        case 78:
            cout << "Obselete format\n";
        break;
    
        default:
        break;
    }

   char dir = 'a';
   int x1 = 10, y = 10;
   while (dir != 'r')
   {
        cout << "\nYour location is " << x << " , " << y;
        cout << "\nEnter direction (n, s, e, w): ";
        dir = getchar(); //get character

        switch (dir)
        {
        case 'n': y--; break;
        case 's': y++; break;
        case 'e': x++; break;
        case 'w': x--; break;
        case 'r': cout << "Exiting\n"; break;
        default: cout << "Try again\n";
        }
    }
    return 0;
}