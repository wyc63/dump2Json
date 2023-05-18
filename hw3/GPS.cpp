#include "GPS.h"

GPS::GPS(const string &location, const string &latitude, const string &longitude ) : location(location), latitude(latitude), longitude(longitude) {}

Json::Value GPS::dump2JSON() {
    Json::Value where;
    where["location"] = location;
    where["latitude"] = latitude;
    where["longitude"] = longitude;
    return where;
}