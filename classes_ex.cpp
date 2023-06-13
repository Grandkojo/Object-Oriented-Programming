#include <iostream>
#include <conio.h>
using namespace std;

//Tollbooth Program

class tollBooth
{
    private:
        unsigned int car_no;
        double total_amount;
    public:
    //constructor
        tollBooth() : car_no(0), total_amount(0.0)
        {}
        void payingCar() 
        {
            car_no++;
            total_amount += 0.50;
            cout << "Cars: " << car_no << ", Amount: " << total_amount << endl; 
        }
        void nopayCar() 
        {
            car_no++;
            total_amount += 0;
            cout << "Cars: " << car_no << ", Amount: " << total_amount << endl; 
        }
        void display()
        {
            cout << "\nThe total number of cars is: " << car_no;
            cout << "\nThe total cash is: " << total_amount << " cedis";
            cout << "\n\n\tThanks for using Essien's Tollbooth System :)!";
        }
        void display_abrupt()
        {
            cout << "\nThe total number of cars so far is: " << car_no;
            cout << "\nThe total cash so far is: " << total_amount << " cedis";
            cout << "\nPlease try again.";
            cout << "\n\n\tThanks for using Essien's Tollbooth System :)!";

        }
};

int main()
{
    tollBooth first;
    bool start = true;
    cout << "\n\t\tTHIS PROGRAM IMPLEMENTS THE TOLLBOOTH SYSTEM!\n";
    cout << "\n-> To pay a toll, press p\n->For otherwise, press n.\n->Press the 'e' key to view the total after you're done\n\n";
    cout << "Start!\n";

    while (start)
    {
        string input;
        cin >> input;

        if (input == "p")
        {
             first.payingCar();
             continue;
        }
        
        else if (input == "n")
        {
            first.nopayCar();
            continue;
        }
           
        else if (input == "e")
        {
            first.display();
            exit(0);
        }
        
        else
        {
            start = false;
            cout << "\nYou entered a wrong key!";
            first.display_abrupt();
            exit(0);
            break;
        }
    }
    
    return 0;
}