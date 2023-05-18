#ifndef PERSON_H
#define PERSON_H

#include <string>
#include "json/json.h"
#include "ecs36b_Common.h"

using namespace std;

class Person {
public:
    Person(const string &name, const string &job);

    Json::Value dump2JSON() const;

private:
    string name;
    string job;
};

#endif