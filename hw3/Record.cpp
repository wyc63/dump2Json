#include "Record.h"

Record::Record(Time When, GPS Where, vector<Person> Who, vector<Thing> Things)
    : When(When), Where(Where), Who(Who), Things(Things) {}

Json::Value Record::dump2JSON() {
    Json::Value record;
    record["When"] = When.dump2JSON();
    record["Where"] = Where.dump2JSON();

    Json::Value peopleArray(Json::arrayValue);
    for (const auto &person : Who) {
        peopleArray.append(person.dump2JSON());
    }
    record["Who"] = peopleArray;

    Json::Value thingsArray(Json::arrayValue);
    for (const auto &thing : Things) {
        thingsArray.append(thing.dump2JSON());
    }
    record["Things"] = thingsArray;

    return record;
}
