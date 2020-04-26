#include <iostream>
#include <string>

#include <./transport.h>

using namespace std;

#pragma once

class Tour {
public:
    Tour(string destinations, int lengthInDays, int pricePerAdult, TransportCompany* transportCompany);
    ~Tour();
    void print();
    vector<string> getDestinations() const;
    void setDestinations(vector<string> destinations);
    int getLengthInDays() const;
    void setLengthInDays(int lengthInDays);
    int getPricePerAdult() const;
    void setPricePerAdult(int pricePerAdult);

private:
    //(?)string code; // = destinations[0] + lengthInDays | uniquely identifies each tour
    string destinations;
    int lengthInDays;
    int pricePerAdult;
    TransportCompany transportCompany;
};