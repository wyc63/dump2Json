#ifndef RECORD_H
#define RECORD_H

#include <string>
#include <vector>
#include "Person.h"
#include "Thing.h"
#include "GPS.h"
#include "Time.h"
#include "json/json.h"
#include "ecs36b_Common.h"

using namespace std;

class Record {
public:
    Record(Time When, GPS Where, vector<Person> Who, vector<Thing> Things);

    Json::Value dump2JSON();

private:
    Time When;
    GPS Where;
    std::vector<Person> Who;
    std::vector<Thing> Things;
};

#endif