#include <iostream>
using namespace std;

int main()
{
    class Product
    {
        private:
            int pro_code, count;
            float pro_price;
        public:
        Product(): pro_code(0), count(0), pro_price(0.0){}
        void getproduct()
        {
            cout << "Enter product code: "; cin >> pro_code;
            cout << "Enter product price: "; cin >> pro_price;
        }
        void displaysum()
        {
            float sum = 0;
            sum += pro_price;
            cout << "Total sum of product cost is: " << pro_price; 
        }
        void displayproduct()
        {
            cout << "\nProduct code: " << pro_code;
            cout << "\nProduct price: " << pro_price;
        }
    };

    int main()
    {
        Product obj;
        obj.getproduct();
        obj.displaysum();
        obj.displayproduct()
    }
    return 0;
}