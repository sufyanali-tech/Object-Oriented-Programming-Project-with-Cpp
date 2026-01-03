#include "Economy_Bussiness_First_Person.h"
#include "Flight_Type.h"
#include <iostream>
using namespace std;

void Economy :: PassengerData_for_one_return_way(string a, string b, string c, string d, string e, string f, int g, int h, int i, string j)
{
    departure_city_name_1 = a;
    destination_city_name_1 = b;
    first_name = c;
    last_name = d;
    e_passport_number = e;
    date_of_travel_1 = f;
    adult_seat = g;
    child_seat = h;
    infant_seat = i;
    flightype = j;
}
void Economy :: PassengerData_for_multiCity(string a, string b, string c, string d, string e, string f, string g, string h, string i, int j, int k, int l, string m)
{
    departure_city_name_1 = a;
    destination_city_name_1 = b;
    departure_city_name_2 = c;
    destination_city_name_2 = d;
    first_name = e;
    last_name = f;
    e_passport_number = g;
    date_of_travel_1 = h;
    date_of_travel_2 = i;
    adult_seat = j;
    child_seat = k;
    infant_seat = l;
    flightype = m;
}

void Economy ::selectTicket_for_one_return_way()
{

    system("cls");

    if (flightype == "one way" || flightype == "oneway" || flightype == "One way" || flightype == "Oneway")
    {
        system("cls");

        cout << "             AVAILIBLE FLIGHTS FOR  " << destination_city_name_1 << endl;
        cout << "\t-----------X-----------------X------------------\n\n\n";
        cout << "Flight Number 1) \n\n";
        cout << "----------------------------------------------------------\n";
        cout << "|" << departure_city_name_1 << " -----------TO --------- " << destination_city_name_1 << "\n";
        cout << "|" << date_of_travel_1 << time_1 << endl;
        cout << "|\t\t\t" << non_stop << "\n";
        cout << "|\t\t\t" << ticket_price_1 << " /PKR" << "\n";
        cout << "----------------------------------------------------------\n\n\n";

        cout << "Flight Number 2) \n\n";
        cout << "----------------------------------------------------------\n";
        cout << "|" << departure_city_name_1 << " -----------TO --------- " << destination_city_name_1 << "\n";
        cout << "|" << date_of_travel_1 << time_2 << endl;
        cout << "|\t\t\t" << one_stop << "\n";
        cout << "|\t\t\t" << ticket_price_2 << " /PKR" << "\n";
        cout << "----------------------------------------------------------\n\n\n";

        cout << "Flight Number 3) \n\n";
        cout << "----------------------------------------------------------\n";
        cout << "|" << departure_city_name_1 << " -----------TO --------- " << destination_city_name_1 << "\n";
        cout << "|" << date_of_travel_1 << time_3 << endl;
        cout << "|\t\t\t" << two_stop << "\n";
        cout << "|\t\t\t" << ticket_price_3 << " /PKR" << "\n";
        cout << "----------------------------------------------------------\n\n\n";

        cout << "Enter the FLIGHT NUMBER you Want to Choose  :  ";
        cin >> chooseFlightNumber;
        if (chooseFlightNumber == 1)
        {
            selectTheFires(date_of_travel_1, time_1, ticket_price_1);
        }
        else if (chooseFlightNumber == 2)
        {
            selectTheFires(date_of_travel_1, time_2, ticket_price_2);
        }
        else if (chooseFlightNumber == 3)
        {
            selectTheFires(date_of_travel_1, time_3, ticket_price_3);
        }
    }
    else if (flightype == "return" || flightype == "Return")
    {
        system("cls");

        cout << "             AVAILIBLE FLIGHTS FOR  " << destination_city_name_1 << endl;
        cout << "\t-----------X-----------------X------------------\n\n\n";
        cout << "Flight Number 1) \n\n";
        cout << "----------------------------------------------------------\n";
        cout << "|" << departure_city_name_1 << " -----------TO --------- " << destination_city_name_1 << "\n";
        cout << "|" << date_of_travel_1 << time_1 << endl;
        cout << "|\t\t\t RETURN FLIGHT\n";
        cout << "|" << destination_city_name_1 << " -----------TO --------- " << departure_city_name_1 << "\n";
        cout << "|\t\t\t" << non_stop << "\t\t\t  \n";
        cout << "|\t\t\t" << ticket_price_4 << " /PKR" << "\n";
        cout << "----------------------------------------------------------\n\n\n";

        cout << "Flight Number 2) \n\n";
        cout << "----------------------------------------------------------\n";
        cout << "|" << departure_city_name_1 << " -----------TO --------- " << destination_city_name_1 << "\n";
        cout << "|" << date_of_travel_1 << time_2 << endl;
        cout << "|\t\t\t RETURN FLIGHT\n";
        cout << "|" << destination_city_name_1 << " -----------TO --------- " << departure_city_name_1 << "\n";
        cout << "|\t\t\t" << one_stop << "\t\t\t  \n";
        cout << "|\t\t\t" << ticket_price_5 << " /PKR" << "\n";
        cout << "----------------------------------------------------------\n\n\n";

        cout << "Flight Number 3) \n\n";
        cout << "----------------------------------------------------------\n";
        cout << "|" << departure_city_name_1 << " -----------TO --------- " << destination_city_name_1 << "\n";
        cout << "|" << date_of_travel_1 << time_3 << endl;
        cout << "|\t\t\t RETURN FLIGHT\t\t\t\n";
        cout << "|" << destination_city_name_1 << " -----------TO --------- " << departure_city_name_1 << "\n";
        cout << "|\t\t\t" << two_stop << "\t\t\t\n";
        cout << "|\t\t\t" << ticket_price_6 << " /PKR" << "\n";
        cout << "----------------------------------------------------------\n\n\n";

        cout << "Enter the FLIGHT NUMBER you Want to Choose  :  ";
        cin >> chooseFlightNumber;
        if (chooseFlightNumber == 1)
        {
            selectTheFires(date_of_travel_1, time_1, ticket_price_4);
        }
        else if (chooseFlightNumber == 2)
        {
            selectTheFires(date_of_travel_1, time_2, ticket_price_5);
        }
        else if (chooseFlightNumber == 3)
        {
            selectTheFires(date_of_travel_1, time_3, ticket_price_6);
        }
    }
}
void Economy ::selectTicket_for_multiCity()
{
    system("cls");

    cout << "               AVAILIBLE FLIGHTS FOR   " << destination_city_name_1 << endl;
    cout << "\t-----------X-----------------X------------------\n\n\n";
    cout << "Flight Number 1) \n\n";
    cout << "----------------------------------------------------------\n";
    cout << "|1ST FLIGHT)\n\n";
    cout << "|\n";
    cout << "|" << departure_city_name_1 << " -----------TO --------- " << destination_city_name_1 << "\n";
    cout << "|" << date_of_travel_1 << "  " << time_1 << "\n\n";
    cout << "|\n";
    cout << "|2ND FLIGHT) \n";
    cout << "|\n";
    cout << "|" << departure_city_name_2 << " -----------TO --------- " << destination_city_name_2 << "\n";
    cout << "|" << date_of_travel_2 << "  " << time_1<< "\n";
    cout << "|\t\t\t" << non_stop << "\n";
    cout << "|\t\t\t" << ticket_price_7 << "\n";
    cout << "----------------------------------------------------------\n\n\n";

    cout << "Flight Number 2) \n\n";
    cout << "----------------------------------------------------------\n";
    cout << "|1ST FLIGHT)\n";
    cout << "|\n";
    cout << "|" << departure_city_name_1 << " -----------TO --------- " << destination_city_name_1 << "\n";
    cout << "|" << date_of_travel_1 << "  "<< time_2 << "\n\n";
    cout << "|\n";
    cout << "|2ND FLIGHT) \n";
    cout << "|\n";
    cout << "|" << departure_city_name_2 << " -----------TO --------- " << destination_city_name_2 << "\n";
    cout << "|" << date_of_travel_2 << "  " << time_2 << " \n";
    cout << "|\t\t\t" << one_stop << "\n";
    cout << "|\t\t\t" << ticket_price_8 << "\n";
    cout << "----------------------------------------------------------\n\n\n";

    cout << "Flight Number 3) \n\n";
    cout << "----------------------------------------------------------\n";
    cout << "|1ST FLIGHT)\n";
    cout << "|\n";
    cout << "|" << departure_city_name_1 << " -----------TO --------- " << destination_city_name_1 << "\n";
    cout << "|" << date_of_travel_1 << "  " << time_3 << "\n\n";
    cout << "|\n";
    cout << "|2ND FLIGHT) \n";
    cout << "|\n";
    cout << "|" << departure_city_name_2 << " -----------TO --------- " << destination_city_name_2 << "\n";
    cout << "|" << date_of_travel_2 << "  " << time_3 << "\n";
    cout << "|\t\t\t" << two_stop << "\n";
    cout << "|\t\t\t" << ticket_price_9 << "\n";
    cout << "----------------------------------------------------------\n\n\n";

    cout << "Enter the FLIGHT NUMBER you Want to Choose  :  ";
    cin >> chooseFlightNumber;
    if (chooseFlightNumber == 1)
    {
        selectTheFires(date_of_travel_1, time_1, ticket_price_7);
    }
    else if (chooseFlightNumber == 2)
    {
        selectTheFires(date_of_travel_1, time_2, ticket_price_8);
    }
    else if (chooseFlightNumber == 3)
    {
        selectTheFires(date_of_travel_1, time_3, ticket_price_9);
    }
}
