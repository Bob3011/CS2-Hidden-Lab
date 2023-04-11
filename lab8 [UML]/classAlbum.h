#ifndef classAlbum
#define classAlbum

#include <iostream>
using namespace std;

class album
{
private: 
    int albumId;
    string albumTitile;
    string albumRemarks;

public:
    album()
    {
        albumId=0;
        albumTitile = "no Title";
        albumRemarks = "no Remarks";
    }

    void createAlbum(int n, string t, string r)
    {
        albumId = n;
        albumTitile = t;
        albumRemarks = r;
    }

    void setAlbumId(int n)
    {
        albumId = n;
    }
    
    int getAlbumId()
    {
        return albumId;
    }

    void setAllbumTitle(string n)
    {
        albumTitile = n;
    }   

    void setAllbumRemarks(string n)
    {
        albumRemarks = n;
    }     
};
#endif //!classAlbum