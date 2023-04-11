#ifndef classPhoto
#define classPhoto

#include <iostream>
using namespace std;

class photo
{
private:
    int id;
    string title;
    string remarks;
    string type;
    string privacy;

public:
    Photo(Album album, Location location, Tag tag, Member member) {
        this->album = album;
        this->location = location;
        this->tag = tag;
        this->member = member;
    }
    
    void setId(int n)
    {
        id=n;
    }

    int getId()
    {
        return id;
    }

    void setTitle(string n)
    {
        title=n;
    }

     void setRemarks(string n)
    {
        remarks=n;
    }

     void setType(string n)
    {
        type=n;
    }

     void setPrivacy(string n)
    {
        privacy=n;
    }

    string getTitle()
    {
        return title;
    }

    string getRemarks()
    {
        return remarks;
    }

    string getType()
    {
        return type;
    }

    string getPrivacy()
    {
        return privacy;
    }
};

#endif // !classPhoto