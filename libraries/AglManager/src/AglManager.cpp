#include "AglManager.h"

AglManager::AglManager()
{
    hgtReader = new HGTReader("/HGT/");
}

void AglManager::setAlti(double dAlti)
{
    if (currentAlti != dAlti)
    {
        currentAlti = dAlti;
        computeHeight();
    }
}

void AglManager::setLatitude(double dLatitude)
{
    if (currentLat != dLatitude)
    {
        currentLat = dLatitude;
        computeHeight();
    }
}

void AglManager::setLongitude(double dLongitude)
{
    if (currentLong != dLongitude)
    {
        currentLong = dLongitude;
        computeHeight();
    }
}

void AglManager::computeHeight()
{
    currentHeight = currentAlti - hgtReader->getGroundLevel(currentLat/10, currentLong/10);
}