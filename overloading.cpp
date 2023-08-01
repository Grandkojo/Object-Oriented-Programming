#include <iostream>
using namespace std;

class Weight
{
    private:
        int kg;
    public:
        Weight(){
            kg = 0;
        }

        Weight(int x){
            kg = x;
        }
        void printWeight(){
            cout << "Weight in kg: " << kg << endl;
        }
        Weight operator ++(){
            Weight temp;
            temp.kg = ++kg;
            return temp;
        }

        void operator ++(int){
            kg++;
        }
};