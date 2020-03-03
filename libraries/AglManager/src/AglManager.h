#ifndef AGL_MANAGER_H
#define AGL_MANAGER_H

#include "HGTReader.h"

class AglManager
{
public:
    AglManager();
    void setAlti(double dAlti);
    void setLatitude(double dLatitude);
    void setLongitude(double dLongitude);
    double getHeight() { return currentHeight; }

private:
    void computeHeight();
    HGTReader *hgtReader;
    double currentAlti;
    double currentLong;
    double currentLat;
    double currentHeight;
};

#endif //AGL_MANAGER_H