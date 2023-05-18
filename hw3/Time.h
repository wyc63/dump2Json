#ifndef TIME_H
#define TIME_H

#include <string>
#include "json/json.h"
#include "ecs36b_Common.h"

using namespace std;

class Time {
public:
    Time(const string &time, const string &date, const string &day);

    Json::Value dump2JSON();

private:
    string time;
    string date;
    string day;
};

#endif