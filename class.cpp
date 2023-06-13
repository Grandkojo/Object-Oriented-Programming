#include <iostream>
using namespace std;
    class Distance //English Distance class
    {
        private:
        int feet;
        float inches;

        public:
        //constuctor (no args)
        Distance() : feet(0), inches(0.0)
        {}
        //constuctor (two args)
        Distance(int ft, float in) : feet(ft), inches(in)
        {}
        void getdist()//get length from user
        {
            cout << "\nEnter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }
        void showdist() //display distance
        {cout << feet << "\'-" << inches << '\"';}
        void add_dist(Distance, Distance); //declaration
    };

    //static class data
    class foo
    {
        private:
            static int count; //only one data item for all objects
            //note: "declaration" only
        public:
            foo() //increments count when object created
        {count++; }
            int getcount() //returns count
        {return count; }
    };

    int foo::count = 2; //*definition of count

    //add lengths d2 and d3
    void Distance::add_dist(Distance d2, Distance d3)
    {
        inches = d2.inches + d3.inches; //add the inches
        feet = 0; //(for possible carry)
        if (inches >= 12.0) // if total exceeds 12.0.
        {
            //then decrease inches
            inches -= 12.0; //by 12.0 and
            feet++; //increase feet by 1
        }
        feet += d2.feet + d3.feet; //add the feet
    }

int main()
{
    Distance dist1, dist3; //define two lengths
    Distance dist2(11, 6.25); //define and initialize dist2

    dist1.getdist(); //get dist1 from user

    //dist3 = dist1 + dist2 // display all lengths
    dist3.add_dist(dist1, dist2);

    cout << "\ndist1 = "; dist1.showdist();
    cout << "\ndist2 = "; dist2.showdist();
    cout << "\ndist3 = "; dist3.showdist();
    cout << endl;

    foo f1, f2, f3; //create three objects

    cout << "count is " << f1.getcount() << endl; //each object
    cout << "count is " << f2.getcount() << endl; //sees the
    cout << "count is " << f3.getcount() << endl; //same value

    return 0;
}
