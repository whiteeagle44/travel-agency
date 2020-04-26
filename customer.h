#include <iostream>
#include <string>
#include <vector>

#include <./tour.h>

using namespace std;

#pragma once

class Customer {
public:
    Customer(string name, Tour* tourReserved, int numOfAccompanyingAdults, int numOfChildren);
    ~Customer();
    void print();
    int calculateMoneySpent(); // (numOfAccompanyingAdults + 1) * tour price per adult + numOfChildren * (tour price per adult * 0.5)
    string getName() const;
    void setName(string name);
    Tour* getReservedTour() const;
    void setReservedTour(Tour* tourReserved);
    int GetNumOfAccompanyingAdults() const;
    void SetNumOfAccompanyingAdults(int numOfAccompanyingAdults);
    int GetNumOfChildren() const;
    void SetNumOfChildren(int numOfChildren);

private:
    string name;
    Tour* reservedTour;
    int numOfAccompanyingAdults;
    int numOfChildren;
    int moneySpent;
};