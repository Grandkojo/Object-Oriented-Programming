#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    /*int number = 17785;
    char name[20] = "Welcome to this class!";
    string name = "Welcome to this class!";
    float pos = -56.1427;
    string laa = "5333203xy"

    int x = 5,y = 5,z = 5;
    bool statement = true;
    string  mix = "5262778y";
    char str_array[9];*/

    int age, current_year = 2023, birth_year;
    cout<< "Enter your age: " << endl;
    cin >> age;
    birth_year = current_year - age;
    cout<<"\nYou were born in the year "<< birth_year<<endl;

    int marks[] = {67, 71, 54, 43, 82, 90};
    marks[2] = 75;
    int AppliedElectricity = marks[4];
    cout << "The third value is "<< marks[2]<< " and the fifth value is "<< AppliedElectricity;
    marks[9]= 100;
    cout <<endl<< marks[9];
    string my_string[10] = {"Hello", "World"};
    int x, y, z = 5;
    cout<<"x" << x<< "y" << y<< "z"<<z;
    return 0;
}
