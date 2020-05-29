#include <iostream>
#include <string>

using namespace std;

#pragma once

class TransportCompany {
public:
    // TransportCompany();
    TransportCompany(string name, int standard);
    string getName() const;
    void setName(string name);
    string getStandard() const;
    enum Standard { budget,
        decent,
        luxurious };
    void setStandard(TransportCompany::Standard standard);

protected:
    string name_;
    int standard_ = decent;
};

class AirplaneCompany : public TransportCompany {
public:
    AirplaneCompany(string name, int standard, int maxLuggageWeight);
    int getMaxLuggageWeight() const;
    void setMaxLuggageWeight(int maxLuggageWeight);
    const string TYPE = "airplane Company";

private:
    int maxLuggageWeight_;
};

class RailCompany : public TransportCompany {
public:
    RailCompany(string name, int standardLevel, int sleepSpace, int numOfSeatsInCompartment);
    bool hasSleepSpace() const;
    void setSleepSpace(bool hasSleepSpace);
    int getNumOfSeatsInCompartment() const;
    void setNumOfSeatsInCompartment(int numOfSeatsInCompartment);
    const string TYPE = "rail Company";

private:
    bool sleepSpace_;
    int numOfSeatsInCompartment_;
};

class BusCompany : public TransportCompany {
public:
    BusCompany(string name, int standardLevel, bool AC);
    bool hasAC() const;
    void setAC(bool AC);
    const string TYPE = "bus Company";

private:
    bool AC_;
};