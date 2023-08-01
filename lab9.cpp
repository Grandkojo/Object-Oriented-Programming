#include <iostream>
#include <string>
using namespace std;

class Youtubechannel{
    public:
    string Name;
    int SubscribersCount;

    Youtubechannel (string name, int subscribersCount){
        Name = name;
        SubscribersCount = SubscribersCount;
    }

    friend ostream &oprator << (ostream &ot const Youtubechannel &youtu)
};
ostream & operator << (ostream &ot const Youtubechannel &youtu){
    
}
int main(){
    Youtubechannel yt1 = Youtubechannel("Grade A Under A", 3680000);
    cout << yt1;
    return 0;
}