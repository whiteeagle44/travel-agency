#include <iostream>
#include <string>

#include <./travel_agency.h>

using namespace std;

int main()
{
    AirplaneCompany Lot("LOT", TransportCompany::luxurious, 40);
    AirplaneCompany Wizz("Wizz", TransportCompany::budget, 40);
    RailCompany Pkp("PKP", TransportCompany::decent, true, 4);
    BusCompany PolskiBus("PolskiBus", TransportCompany::decent, true);

    TravelAgency Horyzont;

    Tour HongKong("Hong Kong, Japan", 14, 14490, &Wizz);
    Tour NewYork("New York, USA", 12, 19990, &Lot);
    Tour Berlin("Berlin, Germany", 6, 2000, &Pkp);
    Tour Zakopane("Zakopane, Poland", 4, 800, &PolskiBus);

    Horyzont.tours.push_back(&HongKong);
    Horyzont.tours.push_back(&NewYork);
    Horyzont.tours.push_back(&Berlin);
    Horyzont.tours.push_back(&Zakopane);

    Horyzont.printToursBelowPrice(3000); // prints tours with price under 3000PLN

    Customer customer1("Jan Kowalski", &Zakopane, 1, 3);
    Customer customer2("Anna Nowak", &HongKong, 0, 0);
    Customer customer3("Roman Kaminski", &Berlin, 1, 1);
    Customer customer4("Zuzanna Szczypiorska", &NewYork, 2, 0);

    Horyzont.customers.push_back(&customer1);
    Horyzont.customers.push_back(&customer2);
    Horyzont.customers.push_back(&customer3);
    Horyzont.customers.push_back(&customer4);

    customer1.SetNumOfChildren(4);

    cout << Horyzont.calculateProfit() << endl;

    return 0;
}
