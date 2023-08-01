#include <iostream>
using namespace std;

class CPolygon{
    protected:
        int width, height;
    public:
        void set_values(int a, int b){
            width = a, height = b;
        }
        
        virtual int area(){
            return 0;
        }
};

class CRectangle : public CPolygon{
    public:
        int area(){
            return (width * height);
        }
};

class CTriangle : public CPolygon{
    public:
        int area(){
            return (0.5 * width * height);
        }
};

int main(){
    CRectangle rect;
    CTriangle trgl;
    CPolygon poly;

    CPolygon *ppoly1 = &rect;
    CPolygon *ppoly2 = &trgl;
    CPolygon *ppoly3 = &poly;

    ppoly1->set_values(10, 20);
    ppoly2->set_values(4, 7);
    ppoly3->set_values(3, 9);

    cout << "\nThe area of the rectangle is: " << ppoly1->area();
    cout << "\n\nThe area of the triangle is: " << ppoly2->area();
    cout << "\n\nThe area of the polygon is: " << ppoly3->area();

return 0;
}