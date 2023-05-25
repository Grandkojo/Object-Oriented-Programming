#include <iostream>
#include <iomanip>
using namespace std;
void BMI(float x, float y);
int main()
{
    //Body Mass Index Calculator
    float height_cm, height_m, weight_kg;
    cout <<"\tThis is a Body Mass Index Calculator";
    cout << "\n\nEnter your height in centimeters: "; cin >> height_cm;
    height_m = height_cm / 100;
    cout << "\nEnter your weight in kilograms: "; cin >> weight_kg;
    BMI(weight_kg, height_m);

return 0;
}

void BMI(float x, float y)
{
    float BMI = (x / (y * y));
    if (BMI < 18.5)
        cout << "\nYour BMI is: " << setprecision(3) << BMI << ".You are underweight.\n";
    else if (18.5 <= BMI <= 24.9)
        cout << "\nYour BMI is: " << setprecision(3) << BMI << ".Your weight is normal.\n";
    else if (25 <= BMI <= 29.9)
        cout << "\nYour BMI is: " << setprecision(3) << BMI << ".You are overweight.\n";
    else if (30 <= BMI <= 39.9)
        cout << "\nYour BMI is: " << setprecision(3) << BMI << ".You are obese.\n";
    else if (BMI >= 40)
        cout << "\nYour BMI is " << setprecision(3) << BMI << ".You are obese.\n";
}