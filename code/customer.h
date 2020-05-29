#include <iostream>
#include <string>
#include <vector>

#include "./tour.h"

using namespace std;

#pragma once

class Customer {
public:
    Customer(string name, Tour* reservedTour, int numberOfAccompanyingAdults, int numberOfChildren);
    void print();
    int calculateMoneySpent(); // (numberOfAccompanyingAdults + 1) * tour price per adult + numberOfChildren * (tour price per adult * 0.5)
    string getName() const;
    void setName(string name);
    Tour* getReservedTour() const;
    void setReservedTour(Tour* reservedTour);
    int getNumberOfAccompanyingAdults() const;
    void setNumberOfAccompanyingAdults(int numberOfAccompanyingAdults);
    int getNumberOfChildren() const;
    void setNumberOfChildren(int numberOfChildren);

private:
    string name_;
    Tour* reservedTour_;
    int numberOfAccompanyingAdults_;
    int numberOfChildren_;
    int moneySpent_;
};