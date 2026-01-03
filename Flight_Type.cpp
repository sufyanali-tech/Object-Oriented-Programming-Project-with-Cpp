#include "Flight_Type.h"
#include "Economy_Bussiness_First_Person.h"
#include <iostream>
using namespace std;

Economy economy;
Bussiness bussiness;
Firstclass firstclass;

bool userChoice;
int take_choice_from_user;

bool Flight :: flightType()
{
    system("cls");
    cout << "\t\t-----------------------------\n";
    cout << "\t\t|                           |\n";
    cout << "\t\t|   LET'S START YOUR TRIP   |\n";
    cout << "\t\t|                           |\n";
    cout << "\t\t-----------------------------\n";

    cout << "\nEnter the FLIGHT TYPE\n\n";
    cout << "-----------            --------            --------------\n";
    cout << "|ONE - WAY|   -----    |RETURN|   -----    |MULTI - CITY|\n";
    cout << "-----------            --------            --------------\n\n\n";
    cin.ignore();
    getline(cin, choose_flight_type);

    userChoice = selectFlightType(choose_flight_type);
    if (userChoice == true)
    {
        return true;
    }
    else if (userChoice == false)
    {
        return false;
    }

    return userChoice;
}
bool Flight :: selectFlightType(string flightType)
{
    if (flightType == "one way" || flightType == "oneway" || flightType == "return")
    {
        system("cls");
        cout << "------------------------------------\n";
        cout << "|                                   |\n";
        cout << "|      LET'S BOOK YOUR FLIGHT       |\n";
        cout << "|                                   |\n";
        cout << "------------------------------------\n\n\n";
        cout << "----------------------------\n";
        cout << "| Enter Your Departure City | \n";
        cout << "----------------------------\n\n";
        cout << "--------\n";
        cout << "| FROM |\n";
        cout << "--------\n\n";
        getline(cin, departure_city_name_1);
        cout << "------------------------------\n";
        cout << "| Enter Your Destination City |\n";
        cout << "------------------------------\n\n";
        cout << "------\n";
        cout << "| TO |\n";
        cout << "------\n\n";
        getline(cin, destination_city_name_1);
    }
    else if (flightType == "multi city" || flightType == "multicity")
    {
        system("cls");
        cout << "------------------------------------\n";
        cout << "|                                   |\n";
        cout << "|      LET'S BOOK YOUR FLIGHT       |\n";
        cout << "|                                   |\n";
        cout << "------------------------------------\n\n\n";

        cout << "----------------------------\n";
        cout << "|        FLIGHT NO 1       |\n";
        cout << "----------------------------\n\n";

        cout << "----------------------------\n";
        cout << "| Enter Your Departure City | \n";
        cout << "----------------------------\n\n";
        cout << "--------\n";
        cout << "| FROM |\n";
        cout << "--------\n\n";
        getline(cin, departure_city_name_1);
        cout << "------------------------------\n";
        cout << "| Enter Your Destination City |\n";
        cout << "------------------------------\n\n";
        cout << "------\n";
        cout << "| TO |\n";
        cout << "------\n\n";
        getline(cin, destination_city_name_1);

        cout << "\n\n----------------------------\n";
        cout << "|        FLIGHT NO 2       |\n";
        cout << "----------------------------\n\n";

        cout << "----------------------------\n";
        cout << "| Enter Your Departure City | \n";
        cout << "----------------------------\n\n";
        cout << "--------\n";
        cout << "| FROM |\n";
        cout << "--------\n\n";
        getline(cin, departure_city_name_2);
        cout << "------------------------------\n";
        cout << "| Enter Your Destination City |\n";
        cout << "------------------------------\n\n";
        cout << "------\n";
        cout << "| TO |\n";
        cout << "------\n\n";
        getline(cin, destination_city_name_2);
    }
    system("cls");
    cout << "------------------------------\n";
    cout << "| Enter Your Personal Detail |\n";
    cout << "------------------------------\n\n";

    string first_name, last_name, passport_number, date_of_travel_1, date_of_travel_2;
    int adult_seat, child_seat, infant_seat, seat_choose;
    cout << "Enter your First Name : \n";
    cin >> first_name;
    cout << "Enter your Last Name : \n";
    cin >> last_name;
    cout << "Enter your Passport Number : \n";
    cin >> passport_number;
    if (flightType == "multi city" || flightType == "multicity")
    {
        cout << "Make Sure Data in this Form 01/10/2025\n\n";

        cout << "FLIGHT NUMBER 1\n\n";
        cout << "Enter the date of departure from " << departure_city_name_1 << " : ";
        cin >> date_of_travel_1;
        cout << "FLIGHT NUMBER 2\n\n";
        cout << "Enter the date of departure from " << departure_city_name_2 << " : ";
        cin >> date_of_travel_2;
    }
    else
    {
        cout << "Enter the date of departure : \n\n";
        cout << "Make Sure Data in this Form 01/10/2025\n";
        cin >> date_of_travel_1;
    }
    cout << "Select the Number of Passegers \n\n";
    cout << "Adult 12+ Years : ";
    cin >> adult_seat;
    cout << "Child 2 - 11 Years : ";
    cin >> child_seat;
    cout << "Infant (Under 2 Years ) : ";
    cin >> infant_seat;
    cout << "Select Seat Type \n\n";
    cout << "1)-Economy   2)-Bussiness   3)-First Class \n";
    cin >> seat_choose;

    system("pause");
    system("cls");
    cout << "\n\n\n";
    cout << "--------------------------------------------------\n";
    cout << "|     FINDING THE BEST FARES FOR YOU             |\n";
    cout << "--------------------------------------------------\n\n\n";

    system("pause");
    if (seat_choose == 1)
    {
        if (flightType == "one way" || flightType == "One way" || flightType == "oneway" || flightType == "Oneway" || flightType == "return" || flightType == "Return")
        {
            economy.PassengerData_for_one_return_way(departure_city_name_1, destination_city_name_1, first_name, last_name, passport_number, date_of_travel_1, adult_seat, child_seat, infant_seat, choose_flight_type);
            economy.selectTicket_for_one_return_way();
        }
        else if (flightType == "Multi city" || flightType == "multi city" || flightType == "multicity" || flightType == "Multicity")
        {
            economy.PassengerData_for_multiCity(departure_city_name_1, destination_city_name_1, departure_city_name_2, destination_city_name_2, first_name, last_name, passport_number, date_of_travel_1, date_of_travel_2, adult_seat, child_seat, infant_seat, choose_flight_type);
            economy.selectTicket_for_multiCity();
        }
    }
    else if (seat_choose == 2)
    {
        if (flightType == "one way" || flightType == "One way" || flightType == "oneway" || flightType == "Oneway" || flightType == "return" || flightType == "Return")
        {
            bussiness.PassengerData_for_one_return_way(departure_city_name_1, destination_city_name_1, first_name, last_name, passport_number, date_of_travel_1, adult_seat, child_seat, infant_seat, choose_flight_type);
            bussiness.selectTicket_for_one_return_way();
        }
        else if (flightType == "Multi city" || flightType == "multi city" || flightType == "multicity" || flightType == "Multicity")
        {
            bussiness.PassengerData_for_multiCity(departure_city_name_1, destination_city_name_1, departure_city_name_2, destination_city_name_2, first_name, last_name, passport_number, date_of_travel_1, date_of_travel_2, adult_seat, child_seat, infant_seat, choose_flight_type);
            bussiness.selectTicket_for_multiCity();
        }
    }
    else if (seat_choose == 3)
    {
        if (flightType == "one way" || flightType == "One way" || flightType == "oneway" || flightType == "Oneway" || flightType == "return" || flightType == "Return")
        {
            firstclass.PassengerData_for_one_return_way(departure_city_name_1, destination_city_name_1, first_name, last_name, passport_number, date_of_travel_1, adult_seat, child_seat, infant_seat, choose_flight_type);
            firstclass.selectTicket_for_one_return_way();
        }
        else if (flightType == "Multi city" || flightType == "multi city" || flightType == "multicity" || flightType == "Multicity")
        {
            firstclass.PassengerData_for_multiCity(departure_city_name_1, destination_city_name_1, departure_city_name_2, destination_city_name_2, first_name, last_name, passport_number, date_of_travel_1, date_of_travel_2, adult_seat, child_seat, infant_seat, choose_flight_type);
            firstclass.selectTicket_for_multiCity();
        }
    }

    system("cls");
    cout << "\n ENTER THE CHOICE : 1/2\n";

    cout << "\n1) - CONTINUE TO BOOK FLIGHT \n\n";
    cout << "2) - EXIT FROM APPLICATION \n\n";
    cin >> take_choice_from_user;

    if (take_choice_from_user == 1)
    {
        return true;
    }
    else if (take_choice_from_user == 2)
    {
        return false;
    }
    else 
    {
        return false;
    }
    
}
