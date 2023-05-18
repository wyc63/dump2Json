#include "Thing.h"

Thing::Thing(const string &name, const string &type) : name(name), type(type) {}

Json::Value Thing::dump2JSON() const {
    Json::Value thing;
    thing["name"] = name;
    thing["type"] = type;
    return thing;
}