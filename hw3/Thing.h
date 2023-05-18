#ifndef THING_H
#define THING_H

#include <string>
#include "json/json.h"
#include "ecs36b_Common.h"

using namespace std;

class Thing {
public:
    Thing(const string &name, const string &type);

    Json::Value dump2JSON() const;

private:
    string name;
    string type;
};

#endif