#include <iostream>
#include <list>
#include <string>

#include "./customer.h"
#include "./tour.h"

using namespace std;

#pragma once

class TravelAgency {
public:
    TravelAgency(string name, string countryOfOrigin, string internetDomain, int numberOfEmployees, int averageSalary);
    void printProfit() const; // prints sum of all customers' moneySpent - averageSalary * numOfEmployees
    void printTours() const;
    void printToursBelowPrice(int maxPrice) const; // prints tours with price under maxPrice
    void printCustomers() const;
    string getName() const;
    void setName(string name);
    string getCountryOfOrigin() const;
    void setCountryOfOrigin(string countryOfOrigin);
    string getInternetDomain() const;
    void setInternetDomain(string internetDomain);
    int getAverageSalary() const;
    void setAverageSalary(int averageSalary);
    int getNumberOfEmployees() const;
    void setNumberOfEmployees(int numberOfEmployees);
    vector<Customer> customers;
    vector<Tour> tours;

private:
    string name_;
    string countryOfOrigin_;
    string internetDomain_;
    int numberOfEmployees_;
    int averageSalary_;
};
