#include <iostream>
#include <string>

#include "./travel_agency.h"

using namespace std;

TravelAgency::TravelAgency(string name, string countryOfOrigin, string internetDomain, int numberOfEmployees, int averageSalary = 2850)
    : name_(name)
    , countryOfOrigin_(countryOfOrigin)
    , internetDomain_(internetDomain)
    , numberOfEmployees_(numberOfEmployees)
    , averageSalary_(averageSalary)
{
}

// prints sum of all customers' moneySpent - averageSalary * numOfEmployees
void TravelAgency::printProfit() const
{
    cout << "Calculating profit: " << endl;
    cout << "Income: ";

    int moneySpent = 0;

    for (auto customer : customers) {
        moneySpent += customer.calculateMoneySpent();
        cout << customer.calculateMoneySpent() << "PLN from " << customer.getName() << ", ";
    }

    if (moneySpent == 0) {
        cout << "There are no customers";
    }
    cout << endl;
    cout << "Total income: " << moneySpent << "PLN" << endl;

    cout << "Expenses: " << averageSalary_ * numberOfEmployees_ << "PLN" << endl;

    int profit = moneySpent - averageSalary_ * numberOfEmployees_;

    if (profit < 0) {
        cout << "Expenses exceed profits, new customers needed urgently!" << endl;
    } else {
        cout << "Profit: " << profit << "PLN" << endl;
    }
}

void TravelAgency::printTours() const
{
    for (auto tour : tours) {
        tour.print();
    }
}

// prints tours with price under maxPrice
void TravelAgency::printToursBelowPrice(int maxPrice) const
{
    cout << "Printing tours below " << maxPrice << "PLN: " << endl;
    for (auto tour : tours) {
        if (tour.getPricePerAdult() < maxPrice) {
            tour.print();
        }
    }
}

void TravelAgency::printCustomers() const
{
    cout << "Printing customers: " << endl;
    for (auto customer : customers) {
        customer.print();
    }
}

string TravelAgency::getName() const
{
    return name_;
}

void TravelAgency::setName(string name)
{
    name_ = name;
}

string TravelAgency::getCountryOfOrigin() const
{
    return countryOfOrigin_;
}

void TravelAgency::setCountryOfOrigin(string countryOfOrigin)
{
    countryOfOrigin_ = countryOfOrigin;
}

string TravelAgency::getInternetDomain() const
{
    return internetDomain_;
}

void TravelAgency::setInternetDomain(string internetDomain)
{
    internetDomain_ = internetDomain;
}

int TravelAgency::getAverageSalary() const
{
    return averageSalary_;
}

void TravelAgency::setAverageSalary(int averageSalary)
{
    averageSalary_ = averageSalary;
}

int TravelAgency::getNumberOfEmployees() const
{
    return numberOfEmployees_;
}

void TravelAgency::setNumberOfEmployees(int numberOfEmployees)
{
    numberOfEmployees_ = numberOfEmployees;
}