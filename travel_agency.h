#include <iostream>
#include <list>
#include <string>

#include <./customer.h>
#include <./tour.h>

using namespace std;

#pragma once

class TravelAgency {
public:
    int calculateProfit(); // returns sum of all customers' moneySpent - averageSalary * numOfEmployees
    void printToursBelowPrice(int maxPrice); // prints tours with price under maxPrice
    string getCountryOfOrigin();
    void setCountryOfOrigin(string countryOfOrigin);
    string getInternetDomain();
    void setInternetDomain(string internetDomain);
    int getAvgSalary();
    void setAvgSalary(int avgSalary);
    int getNumOfEmployees();
    void setNumOfEmployees(int numOfEmployees);
    vector<Customer*> customers;
    list<Tour*> tours;

private:
    string countryOfOrigin;
    string internetDomain;
    int avgSalary;
    int numOfEmployees;
};
