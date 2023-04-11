#ifndef classMember
#define classMember

#include <iostream>
using namespace std;

class member
{
private:
    int memberId;
    string memberName;
    string adress;
    string contact;

public:
    void setMemberId(int n)
    {
        memberId = n;
    }

    int getMamberId()
    {
        return memberId;
    }

    void setName(string n)
    {
        memberName = n;
    }

     void setAdress(string n)
    {
        adress = n;
    }

     void setContact(string n)
    {
        contact = n;
    }

    string getMemberName()
    {
        return memberName;
    }

    string getMemberName()
    {
        return adress;
    }

    string getMemberName()
    {
        return contact;
    }
};
#endif //!classMember