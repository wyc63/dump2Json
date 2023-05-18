#ifndef GPS_H
#define GPS_H

#include <string>
#include "json/json.h"
#include "ecs36b_Common.h"

using namespace std;

class GPS {
public:
    GPS(const string &location, const string &latitude, const string &longitude);

    Json::Value dump2JSON();

private:
    string location;
    string latitude;
    string longitude;
};

#endif