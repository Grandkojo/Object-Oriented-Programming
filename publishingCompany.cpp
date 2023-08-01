#include <iostream>
using namespace std;

class Publication
{
    private:
        string title;
        float price;
    public:
        void getdata(string ttl, float cost){
            title = ttl;
            price = cost;
        }
        void putdata(){
            cout <<"Title: " << title;
            cout <<"Price" << price;
        }
};

class Book : public Publication{
    private:
        int pageCount = 0:
    public:
        pageCount++;
        
};