#include <iostream>
#include <string>

#include "./transport.h"

using namespace std;

//TransportCompany
TransportCompany::TransportCompany(string name, int standard)
    : name_(name)
    , standard_(standard)
{
}

string TransportCompany::getName() const { return name_; }

void TransportCompany::setName(string name) { name_ = name; }

string TransportCompany::getStandard() const
{
    switch (standard_) {
    case TransportCompany::budget:
        return "budget";
        break;
    case TransportCompany::decent:
        return "decent";
        break;
    case TransportCompany::luxurious:
        return "luxurious";
        break;
    }
}

void TransportCompany::setStandard(TransportCompany::Standard standard)
{
    standard_ = standard;
}
//AirplaneCompany
AirplaneCompany::AirplaneCompany(string name, int standard, int maxLuggageWeight)
    : TransportCompany(name, standard)
{
    maxLuggageWeight_ = maxLuggageWeight;
}

int AirplaneCompany::getMaxLuggageWeight() const { return maxLuggageWeight_; }

void AirplaneCompany::setMaxLuggageWeight(int maxLuggageWeight)
{
    maxLuggageWeight = maxLuggageWeight;
}
//RailCompany
RailCompany::RailCompany(string name, int standardLevel, int sleepSpace, int numOfSeatsInCompartment)
    : TransportCompany(name, standardLevel)
{
    sleepSpace_ = sleepSpace;
    numOfSeatsInCompartment_ = numOfSeatsInCompartment;
}

bool RailCompany::hasSleepSpace() const
{
    return sleepSpace_;
}

void RailCompany::setSleepSpace(bool sleepSpace)
{
    sleepSpace_ = sleepSpace;
}

int RailCompany::getNumOfSeatsInCompartment() const
{
    return numOfSeatsInCompartment_;
}

void RailCompany::setNumOfSeatsInCompartment(int numOfSeatsInCompartment)
{
    numOfSeatsInCompartment_ = numOfSeatsInCompartment;
}

//BusCompany
BusCompany::BusCompany(string name, int standardLevel, bool hasAC)
    : TransportCompany(name, standardLevel)
{
    AC_ = hasAC;
}

bool BusCompany::hasAC() const
{
    return AC_;
}

void BusCompany::setAC(bool AC)
{
    AC_ = AC;
}
