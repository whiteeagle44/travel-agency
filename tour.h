#include <iostream>
#include <string>

#include "./transport.h"
using namespace std;

#pragma once

class Tour {
public:
    Tour(string destination, int lengthInDays, int pricePerAdult, TransportCompany& transportCompany);
    void print();
    string getDestination() const;
    void setDestination(string destinations);
    int getLengthInDays() const;
    void setLengthInDays(int lengthInDays);
    int getPricePerAdult() const;
    void setPricePerAdult(int pricePerAdult);

private:
    string destination_;
    int lengthInDays_;
    int pricePerAdult_;
    TransportCompany& transportCompany_;
};