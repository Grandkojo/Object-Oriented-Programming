#include <iostream>
using namespace std;

class where{
    private:
        char charray[10]; //occupie 10 bytes
    public:
        void reveal(){
            cout << "\nMy object's address is " << this;
        }
};

class what{
    private:
        int alpha;
    public:
        void tester(){
            this->alpha = 11; //same as alpha = 11
            cout << this->alpha; //same as cout << alpha
        }
};

int main(){
    where w1, w2, w3;
    w1.reveal(); //see where they are
    w2.reveal();
    w3.reveal();
    what w;
    w.tester();
    cout << endl;
    return 0;
}