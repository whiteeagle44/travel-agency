#include <iostream>
#include <string>
#include <vector>

#include "./travel_agency.h"

using namespace std;

void log(string message);

int main()
{
    log("Transport companies");

    AirplaneCompany Lot("LOT", TransportCompany::luxurious, 40);
    AirplaneCompany Wizz("Wizz", TransportCompany::budget, 25);
    RailCompany Pkp("PKP", TransportCompany::decent, true, 4);
    BusCompany PolskiBus("Polski Bus", TransportCompany::decent, true);

    // variables common to all transport companies
    cout << Lot.getName() << " is a " << Lot.getStandard() << " " << Lot.TYPE << endl;
    cout << Wizz.getName() << " is a " << Wizz.getStandard() << " " << Wizz.TYPE << endl;
    cout << Pkp.getName() << " is a " << Pkp.getStandard() << " " << Pkp.TYPE << endl;
    cout << PolskiBus.getName() << " is a " << PolskiBus.getStandard() << " " << PolskiBus.TYPE << endl;

    // variables characteristic to airplane companies
    cout << "Max luggage weight of " << Lot.getName() << " is " << Lot.getMaxLuggageWeight() << " kg." << endl;
    cout << "Max luggage weight of " << Wizz.getName() << " is " << Wizz.getMaxLuggageWeight() << " kg." << endl;

    // rail & bus companies
    cout << boolalpha; // flag that makes bools display as true or false instead of 1 or 0.
    cout << Pkp.getName() << " has " << Pkp.getNumOfSeatsInCompartment() << " seats in a compartment, sleep space: "
         << Pkp.hasSleepSpace() << endl;
    cout << PolskiBus.getName() << " has air conditioning: " << PolskiBus.hasAC() << endl;

    log("Travel Agency");

    TravelAgency Horyzont("Horyzont", "Poland", "horyzont.io", 10, 3000);
    Horyzont.printProfit();

    log("Tours");

    Tour HongKong("Hong Kong, Japan", 14, 14490, Wizz);
    Tour NewYork("New York, USA", 12, 19990, Lot);
    Tour Berlin("Berlin, Germany", 6, 2000, Pkp);
    Tour Zakopane("Zakopane, Poland", 4, 800, PolskiBus);

    // Adding new tours to Horyzont.
    Horyzont.tours.push_back(HongKong);
    Horyzont.tours.push_back(NewYork);
    Horyzont.tours.push_back(Berlin);
    Horyzont.tours.push_back(Zakopane);

    Horyzont.printTours();

    Horyzont.printToursBelowPrice(3000); // prints tours with price under 3000PLN

    log("Customers");

    Customer customer1("Jan Kowalski", &Zakopane, 1, 3);
    Customer customer2("Anna Nowak", &HongKong, 0, 0);
    Customer customer3("Roman Kaminski", &Berlin, 1, 1);
    Customer customer4("Zuzanna Szczypiorska", &NewYork, 2, 0);

    customer1.setNumberOfChildren(4);

    Horyzont.customers.push_back(customer1);
    Horyzont.customers.push_back(customer2);
    Horyzont.customers.push_back(customer3);
    Horyzont.customers.push_back(customer4);

    Horyzont.printCustomers();

    Horyzont.printProfit();

    return 0;
}

void log(string message)
{
    cout << "\033[32m" << message << "\033[0m" << endl;
}
