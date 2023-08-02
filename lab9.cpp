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

   // Overloaded << operator
    friend ostream& operator<<(ostream& os, const YouTubeChannel& channel) {
        os << "Name: " << channel.Name << ", Subscribers: " << channel.SubscribersCount;
        return os;
    }
};
ostream & operator << (ostream &ot const Youtubechannel &youtu){
    
}
int main(){
    Youtubechannel yt1 = Youtubechannel("Grade A Under A", 3680000);
    cout << yt1;
    return 0;
}

/*cout << yt1: The first part of the expression is cout << yt1, where yt1 is an object of the YouTubeChannel class. When this line is executed, it attempts to print the yt1 object using the << operator.

operator<<(cout, yt1): Behind the scenes, the operator<< function is called with two arguments: cout (which is an instance of the ostream class representing the standard output) and yt1 (which is the YouTubeChannel object).

friend ostream& operator<<(ostream& os, const YouTubeChannel& channel): The operator<< function defined inside the YouTubeChannel class accepts these two parameters: os (of type ostream&) representing the output stream (cout) and channel (of type const YouTubeChannel&) representing the YouTubeChannel object.

Inside the operator<< function: The function then proceeds to format the data from the channel object and write it to the output stream (os) using the << operator.

The formatted output: As a result, the Name and SubscribersCount from the yt1 object are combined into a single string and printed in the desired format: "Name: Grade A Under A, Subscribers: 3680000".

cout << endl;: After the first cout << yt1 is executed, the second part << endl is processed, and it appends a newline character to ensure the next output appears on a new line.

So, the combination of cout << yt1 and the overloaded operator<< function results in the correct formatted output as specified in the operator<< function implementation. The << operator facilitates the chaining of these output operations, allowing you to print multiple values or objects in one line of code.*/