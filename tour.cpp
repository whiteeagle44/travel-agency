#include <iostream>
#include <string>

#include "./tour.h"

using namespace std;

Tour::Tour(string destination, int lengthInDays, int pricePerAdult, TransportCompany& transportCompany)
    : destination_(destination)
    , lengthInDays_(lengthInDays)
    , pricePerAdult_(pricePerAdult)
    , transportCompany_(transportCompany)
{
}

void Tour::print()
{
    cout << "Destination: " << destination_ << ", length: " << lengthInDays_ << " days, price per adult: "
         << pricePerAdult_ << "PLN, transport: " << transportCompany_.getStandard() << " company " << transportCompany_.getName() << endl;
}

string Tour::getDestination() const
{
    return destination_;
}
void Tour::setDestination(string destination)
{
    destination_ = destination;
}

int Tour::getLengthInDays() const
{
    return lengthInDays_;
}

void Tour::setLengthInDays(int lengthInDays)
{
    lengthInDays_ = lengthInDays;
}

int Tour::getPricePerAdult() const
{
    return pricePerAdult_;
}

void Tour::setPricePerAdult(int pricePerAdult)
{
    pricePerAdult_ = pricePerAdult;
}