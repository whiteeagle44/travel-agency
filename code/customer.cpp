#include <iostream>
#include <string>

#include "./customer.h"

using namespace std;

Customer::Customer(string name, Tour* reservedTour, int numOfAccompanyingAdults, int numOfChildren)
    : name_(name)
    , reservedTour_(reservedTour)
    , numberOfAccompanyingAdults_(numOfAccompanyingAdults)
    , numberOfChildren_(numOfChildren)
{
}

void Customer::Customer::print()
{
    cout << name_ << " reserved tour: " << reservedTour_->getDestination() << " with "
         << numberOfAccompanyingAdults_ << " accompanying adult(s) and " << numberOfChildren_ << " children" << endl;
}

// (numOfAccompanyingAdults + 1) * tour price per adult + numberOfChildren * (tour price per adult * 0.5)
int Customer::calculateMoneySpent()
{
    return (numberOfAccompanyingAdults_ + 1) * reservedTour_->getPricePerAdult()
        + numberOfChildren_ * reservedTour_->getPricePerAdult() * 0.5;
}

string Customer::getName() const
{
    return name_;
}

void Customer::setName(string name)
{
    name_ = name;
}

Tour* Customer::getReservedTour() const
{
    return reservedTour_;
}

void Customer::setReservedTour(Tour* reservedTour)
{
    reservedTour_ = reservedTour;
}

int Customer::getNumberOfAccompanyingAdults() const
{
    return numberOfAccompanyingAdults_;
}

void Customer::setNumberOfAccompanyingAdults(int numberOfAccompanyingAdults)
{
    numberOfAccompanyingAdults_ = numberOfAccompanyingAdults;
}

int Customer::getNumberOfChildren() const
{
    return numberOfChildren_;
}

void Customer::setNumberOfChildren(int numberOfChildren)
{
    numberOfChildren_ = numberOfChildren;
}