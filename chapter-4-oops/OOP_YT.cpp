#include <iostream>
#include <list>
using namespace std;
class Youtubechannel
{
public:
    string Name;
    string OwnerName;
    int subscriberCount;
    list<string> PublishVideoTitles;
};
int main()
{
    Youtubechannel yt;
    yt.Name = "AaryaCreation";
    yt.OwnerName = "Abhishek Aarya";
    yt.subscriberCount = 1;
    yt.PublishVideoTitles = {"Whatsapp status only","Coding"};
    cout << "Channel Name " << yt.Name << endl;
    cout << "Owner Name " << yt.OwnerName << endl;
    cout << "SubscriberCount " << yt.subscriberCount << endl;
    cout<<"Videos :";
    for (string VideoTitle : yt.PublishVideoTitles)
    {
        cout << VideoTitle << endl;
    }
    system("pause>0");
    return 0;
}
