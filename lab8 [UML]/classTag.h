#ifndef classTag
#define classTag

#include <iostream>
using namespace std;

class tag
{
private:
    int tagId;
    string tagName;
    string tagRemarks;

public:
    void setTagId(int n)
    {
        tagId = n;
    }

    int getTagId()
    {
        return tagId;
    }

    void setTagName(string n)
    {
        tagName = n;
    }

    void setTagRemarks(string n)
    {
        tagRemarks = n;
    }

    string getTagName()
    {
        return tagName;
    }

    string getTagRemarks()
    {
        return tagRemarks;
    }
};
#endif // !classTag