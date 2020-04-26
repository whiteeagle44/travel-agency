#include <iostream>
#include <string>

using namespace std;

#pragma once

class TransportCompany {
public:
    TransportCompany(string name, int standardLevel);
    int getStandard();
    enum Standard { budget,
        decent,
        luxurious };
    int setStandard(TransportCompany::Standard standard);

protected:
    string name;
    int standardLevel = decent;
};

class AirplaneCompany : public TransportCompany {
public:
    AirplaneCompany(string name, int standardLevel, int maxLuggageWeight);
    int GetMaxLuggageWeight();
    void SetMaxLuggageWeight(int maxLuggageWeight);

private:
    int maxLuggageWeight;
};

class RailCompany : public TransportCompany {
public:
    RailCompany(string name, int standardLevel, int isSleepSpaceProvided, int numOfSeatsInCompartment);
    bool GetIsSleepSpaceProvided();
    void SetIsSleepSpaceProvided(bool isSleepSpaceProvided);
    int GetNumOfSeatsInCompartment() const;
    void SetNumOfSeatsInCompartment(int numOfSeatsInCompartment);

private:
    bool isSleepSpaceProvided;
    int numOfSeatsInCompartment;
};

class BusCompany : public TransportCompany {
public:
    BusCompany(string name, int standardLevel, bool hasAC);
    bool GetHasAC() const;
    void SetHasAC(bool hasAC);

private:
    bool hasAC;
};