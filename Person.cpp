#include "Person.h"

Person::Person(const string &name, const string &job) : name(name), job(job) {}

Json::Value Person::dump2JSON() const {
    Json::Value person;
    person["name"] = name;
    person["job"] = job;
    return person;
}