#include <iostream>
#include "Person.h"
#include "Thing.h"
#include "GPS.h"
#include "Time.h"
#include "Record.h"
#include "json/json.h"

int main() {
    // Person
    Person instructor("Felix", "instructor");
    Person busDriver("Tiffany", "bus driver");
    Person student("John", "student");

    // Things
    Thing bus("Unitrans L line", "bus");
    Thing computer("John's computer", "computer");
    Thing androidDevice("Android device", "device");

    // Locations
    GPS classroom("Everson Hall Room 176", "38.539349", "-121.774193");
    GPS siloStation("Silo Station", "38.539558", "-121.785751");
    GPS eighthAndJStreet("8th and J Street", "38.551860", "-121.737700");
    GPS mooreAndPollock("Moore and Pollock", "3856470", "-121.71914");

    // Times
    Time t1("6:00 pm", "April 12nd, 2023", "Wednesday");
    Time t2("6:10 pm", "April 12nd, 2023", "Wednesday");
    Time t3("6:20 pm", "April 12nd, 2023", "Wednesday");
    Time t4("6:32 pm", "April 12nd, 2023", "Wednesday");

    // Records
    Record record1(t1, classroom, {instructor}, {});
    Record record2(t2, siloStation, {instructor, busDriver}, {bus});
    Record record3(t3, eighthAndJStreet, {instructor, busDriver, student}, {bus, computer});
    Record record4(t4, mooreAndPollock, {instructor, busDriver}, {bus, androidDevice});

    // Dump records to JSON
    Json::Value records(Json::arrayValue);
    records.append(record1.dump2JSON());
    records.append(record2.dump2JSON());
    records.append(record3.dump2JSON());
    records.append(record4.dump2JSON());

    // Output JSON
    Json::StreamWriterBuilder writer;
    std::string jsonString = Json::writeString(writer, records);
    std::cout << jsonString << std::endl;

    return 0;
}

