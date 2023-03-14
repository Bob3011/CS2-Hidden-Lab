#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
    string Name;
    int SubscribersCount;
    list<string> PublishedVideoTitles;
    /*The elements of a list are stored in a non-contiguous area of memory in C++.*/

    /*Memory required to store the elements in the List is comparatively large as it holds
    the element as well as the pointers for the next and previous nodes.*/

    /*List in STL is another storage container that allows us to store data sequentially.
    It helps in efficiently inserting and deleting elements bidirectionally. It is implemented
    as linear doubly LinkedList in memory. Unlike vectors, they allow non-contiguous memory allocation.*/
protected:
    string OwnerName;
    int contentQuality;
public:
    YouTubeChannel(string name, string ownerName) {
        Name = name;
        OwnerName = ownerName;
        SubscribersCount = 0;
        contentQuality = 0;
    }
    void GetInfo() {
        cout << "Name: " << Name << endl;
        cout << "OwnerName: " << OwnerName << endl;
        cout << "SubscribersCount: " << SubscribersCount << endl;
        cout << "Videos: " << endl;
        for (string videoTitle : PublishedVideoTitles) {
            cout << videoTitle << endl;
        }
    }
    void Subscribe() {
        SubscribersCount++;
    }
    void Unsubscribe() {
        if (SubscribersCount > 0)
            SubscribersCount--;
    }
    void PublishVideo(string title) {
        PublishedVideoTitles.push_back(title);
    }

    void RateContent()
    {
        if (contentQuality >= 5)
        {
            cout << "quality is good" << endl;
        }
        else
        {
            cout << "qualltiy is nont good" << endl;
        }
    }
    // create void RateContent that prints a content is good if the quality is above 5, bad otherwise.


};

class CookingYouTubeChannel :public YouTubeChannel
{
public:
    CookingYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {

    }
    void Practice() {
        cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
        contentQuality++;
    }
};

class SingersYouTubeChannel :public YouTubeChannel
{
public:
    SingersYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {

    }
    void Practice() {
        cout << OwnerName << " is taking singing lessons, learning new music, experimenting with tunes..." << endl;
        contentQuality++;
    }
};

int main()
{
    CookingYouTubeChannel cook("Ali's Kitchen", "Ali");
    SingersYouTubeChannel sing("Rana's Studio", "Rana");

    for (int i = 0; i < 6; i++)
        cook.Practice();

    cook.RateContent();
    sing.RateContent();


    // call the functions practice on both objects. Why are they different?

    // call the function RateContent on both objects. You can only use 4 lines of code. Explain these lines in a few comments.

    return 0;
}
