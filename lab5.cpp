#include <iostream>
#include <list>

using namespace std;

class YoutubeChannel
{
    private:
        string Name;
        string OwnerName;
        int SubscriberCount;
        list<string> PublishedVideosTitles; 

    public:
        void Subscribe()
        {   SubscriberCount++; }

        void Unsubscribe()
        {
            if (SubscriberCount < 0)
                SubscriberCount = 0;
            SubscriberCount--; 
        }
        
        void getname()
        {
            cout << Name << endl;
        }

        void setname(string n)
        {   
            Name = n;
        }

        YoutubeChannel(string name, string ownerName)
        {
            Name = name;
            OwnerName = ownerName;
            SubscriberCount = 0;
        }

        void GetInfo()
        {
            cout << "Name: " << OwnerName << endl;
            cout << "Owner Name: " << OwnerName << endl;
            cout << "Number of Subscribers: " << SubscriberCount << endl;
            cout << "Videos: " << endl;

            for (string videoTitle: PublishedVideosTitles)
            {
                cout << videoTitle << endl;
            }
        }

        void PublishVideo(string title)
        {
            PublishedVideosTitles.push_back(title);
        }
};

int main()
{
    YoutubeChannel MyChannel("EssienYT", "Kojo");

    MyChannel.PublishVideo("How to be a pro swimmer!");
    MyChannel.Unsubscribe();
    MyChannel.GetInfo();

    for (int i = 0; i <= 20; i++)
    {
        MyChannel.Subscribe();
    }

    MyChannel.GetInfo();
    return 0;
}