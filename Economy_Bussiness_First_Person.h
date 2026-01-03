#pragma once
#include <string>
#include <iostream>
using namespace std;

class Economy
{
    private:
    // Ticket Prices for One Way Type Ticket
    
    int ticket_price_1 = 110000;
    int ticket_price_2 = 100000;
    int ticket_price_3 = 90000;

    // Ticket Prices for Return Type Ticket

    int ticket_price_4 = 220000;
    int ticket_price_5 = 200000;
    int ticket_price_6 = 180000;

    // Ticket prices for Multi City Type Ticket

    int ticket_price_7 = 280000;
    int ticket_price_8 = 260000;
    int ticket_price_9 = 230000;



    string weight_allow_1 = "7 KG HAND CARRY + 30 KG";
    string weight_allow_2 = "10 KG HAND CARRY + 40 KG";

    protected:

    // Data Storing Varaibles OF the User Which is also Inherited in Bussiness and First Class 

    string first_name;
    string last_name;
    string date_of_travel_1,date_of_travel_2;
    string e_passport_number;
    string departure_city_name_1,departure_city_name_2;
    string destination_city_name_1,destination_city_name_2;
    int adult_seat;
    int child_seat;
    int infant_seat;
    string flightype;

    int chooseFlightNumber;
    string confirm_ticket,seat;
    int fareNumberChoose;
    string seatNumber;

    string non_stop = "NON STOP";
    string one_stop = "1 STOP";
    string two_stop = "2 STOP";

    string time_1 = "TIME 9:00 AM ------- TIME 12:00 PM";
    string time_2 = "TIME 3:00 AM ------- TIME 8:00 AM";
    string time_3 = "TIME 12:00 PM ------- TIME 6:00 PM";


   
    public:

    void PassengerData_for_one_return_way(string,string,string,string,string,string,int,int,int,string);
    void PassengerData_for_multiCity(string,string,string,string,string,string,string,string,string,int,int,int,string);
    void selectTicket_for_one_return_way();
    void selectTicket_for_multiCity();
    void selectTheFires(string,string,int);
    void flightSummery(int);
    void flightSummery_for_multiCiy(int);
    string seatSelection();
    void printTicket(int);
    void printTicket_for_multiCity(int);
    void flightSummery_for_seatSelector(string,int);
    void flightSummery_for_seatSelector_multiCity(string,int);
    void printTicket_for_seatSelector(string,int);
    void printTicket_for_seatSelector_multyCity(string,int);

};
class Bussiness : public Economy
{
    private:
    
    // Ticket Prices for One Way Type Ticket

    int ticket_price_1 = 160000;
    int ticket_price_2 = 140000;
    int ticket_price_3 = 120000;

    // Ticket Prices for Return Type Ticket

    int ticket_price_4 = 320000;
    int ticket_price_5 = 300000;
    int ticket_price_6 = 280000;

    // Ticket prices for Multi City Type Ticket

    int ticket_price_7 = 350000;
    int ticket_price_8 = 330000;
    int ticket_price_9 = 300000;



    string weight_allow_1 = "10 KG HAND CARRY + 40 KG";
    string weight_allow_2 = "15 KG HAND CARRY + 50 KG";

    public:

    void PassengerData_for_one_return_way(string,string,string,string,string,string,int,int,int,string);
    void PassengerData_for_multiCity(string,string,string,string,string,string,string,string,string,int,int,int,string);
    void selectTicket_for_one_return_way();
    void selectTicket_for_multiCity();
    void selectTheFires(string,string,int);
    void flightSummery(int);
    void flightSummery_for_multiCity(int);
    string seatSelection();
    void printTicket(int);
    void printTicket_for_multiCity(int);
    void flightSummery_for_seatSelector(string,int);
    void flightSummery_for_seatSelector_multiCity(string,int);
    void printTicket_for_seatSelector(string,int);
    void printTicket_for_seatSelector_multyCity(string,int);    

};
class Firstclass  : public Economy
{

    private:

    // Ticket Prices for One Way Type Ticket

    int ticket_price_1 = 250000;
    int ticket_price_2 = 230000;
    int ticket_price_3 = 210000;

    // Ticket Prices for Return Type Ticket

    int ticket_price_4 = 4800000;
    int ticket_price_5 = 440000;
    int ticket_price_6 = 420000;

    // Ticket prices for Multi City Type Ticket

    int ticket_price_7 = 520000;
    int ticket_price_8 = 500000;
    int ticket_price_9 = 490000;



    string weight_allow_1 = "15 KG HAND CARRY + 50 KG";
    string weight_allow_2 = "20 KG HAND CARRY + 60 KG";

    public:

    void PassengerData_for_one_return_way(string,string,string,string,string,string,int,int,int,string);
    void PassengerData_for_multiCity(string,string,string,string,string,string,string,string,string,int,int,int,string);
    void selectTicket_for_one_return_way();
    void selectTicket_for_multiCity();
    void selectTheFires(string,string,int);
    void flightSummery(int);
    void flightSummery_for_multiCity(int);
    string seatSelection();
    void printTicket(int);
    void printTicket_for_multiCity(int);
    void flightSummery_for_seatSelector(string,int);
    void flightSummery_for_seatSelector_multiCity(string,int);
    void printTicket_for_seatSelector(string,int);
    void printTicket_for_seatSelector_multyCity(string,int);    
    
};
