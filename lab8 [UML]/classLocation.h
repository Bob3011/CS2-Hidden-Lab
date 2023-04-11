#ifndef classLocation
#define classLocation

#include <iostream>
using namespace std;

class location
{
private:
    int locationId;
    string locationName;
    string locationRemarks;

public:
    void setLocationId(int n)
    {
        locationId = n;
    }

    int getLocationId()
    {
        return locationId;
    }

    void setLocationName(string n)
    {
        locationName = n;
    }

    void setLocationRemerks(string n)
    {
        locationRemarks = n;
    }
};
#endif //!classLocation