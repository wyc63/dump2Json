#include "Time.h"

Time::Time(const string &time, const string &date, const string &day) : time(time), date(date), day(day) {}

Json::Value Time::dump2JSON() {
    Json::Value when;
    when["time"] = time;
    when["date"] = date;
    when["day"] = day;
    return when;
}