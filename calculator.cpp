#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;


void addition(float *ptr, float operand);
void subtraction(float *ptr, float operand);
void multiplication(float *ptr, float operand);
void division(float *ptr, float operand);
void resetFunction(float *reset_ptr);
void exitFunction(void);
char clearOrExit[2] = "0"; // Variable used to reset current value.

int main()
{
    float firstOperand = 0, secondOperand = 0;
    float *result = &firstOperand;
    char userOperator = '0';
    bool calculatorStatus = true; //Calculator is on.
    start:
        cout << "Start calculations:)\n";
        cout <<"Enter first number.\n";
        cin >> firstOperand;
        do
        {
            cout << "Enter the operator.\n";
            cin >> userOperator;
            cout <<"Enter the second number.\n";
            cin >>secondOperand;

            switch(userOperator)
            {

            case '+':
                {
                    addition(result,secondOperand);
                    cout << "\nEnter @0 to clear the result or #0 to exit or any character to continue.\n";
                    cin >> clearOrExit;
                    if(!strcmp("@0", clearOrExit))
                    {
                        resetFunction(result);
                        goto start;
                    }
                    else if(!strcmp("#0", clearOrExit))
                    {
                        exitFunction();
                    }
                    break;
                }

            case '-':
                {
                   subtraction(result,secondOperand);
                   cout <<"\nEnter @0 to clear the result or #0 to exit or any character to continue.\n";
                   cin >> clearOrExit;
                    if(!strcmp("@0", clearOrExit))
                    {
                        resetFunction(result);
                        goto start;
                    }
                    else if(!strcmp("#0", clearOrExit))
                    {
                        exitFunction();
                    }
                   break;
                }

            case '*':
                {
                    multiplication(result,secondOperand);
                    cout <<"\nEnter @0 to clear the result or #0 to exit or any character to continue.\n";
                    cin >> clearOrExit;
                    if(!strcmp("@0", clearOrExit))
                    {
                        resetFunction(result);
                        goto start;
                    }
                    else if(!strcmp("#0", clearOrExit))
                    {
                        exitFunction();
                    }
                    break;
                }

            case '/':
                {
                    division(result,secondOperand);
                    cout <<"\nEnter @0 to clear the result or #0 to exit or any character to continue.\n";
                    cin >> clearOrExit;
                    if(!strcmp("@0", clearOrExit))
                    {
                        resetFunction(result);
                        goto start;
                    }
                    else if(!strcmp("#0", clearOrExit))
                    {
                        exitFunction();
                    }
                    break;
                }

            case '#':
                {
                    cout << "Goodbye:(\n";
                    calculatorStatus = false;
                    break;
                }
            case '@':
                {
                    goto start;
                    break;
                }
            default:
                {
                    cout << "Error:(\n";
                    goto start;
                }
            }

        }while(calculatorStatus);

    return 0;
}

void addition(float *ptr, float operand)
{
    cout << *ptr  << " + " << operand << " = ";
    *ptr += operand;
    cout << *ptr;

}

void subtraction(float *ptr, float operand)
{

    cout << *ptr  << " - " << operand << " = ";
    *ptr -= operand;
    cout << *ptr;

}
void multiplication(float *ptr, float operand)
{
    cout << *ptr  << " * " << operand << " = ";
    *ptr *= operand;
    cout << *ptr;

}
void division(float *ptr, float operand)
{
    cout << *ptr  << " / " << operand << " = ";
    *ptr /= operand;
    cout << *ptr;

}

// Function to reset current result.
void resetFunction(float *reset_ptr)
{
    *reset_ptr = 0;


}
void exitFunction(void)
{
    cout << "Program exiting.\n";
    exit(0);
}

