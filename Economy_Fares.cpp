#include "Economy_Bussiness_First_Person.h"
#include <iostream>
using namespace std;
 
void Economy :: selectTheFires(string date_of_travel, string stops, int ticket_price)
{
    system("cls");
    
    cout << "------------------X-------------------\n";
    cout << "| SELECT THE FARES FOR ECONOMY CLASS |\n";
    cout << "------------------X-------------------\n\n\n";

    cout << "1)-----------------------------\n";
    cout << "| Flight Type    :  " << flightype << "\n";
    cout << "| Seat Category  :  ECONOMY\n";
    cout << "| Ticket Price   :  " << ticket_price << "\n";
    cout << "| STOPS          :  " << stops << endl;
    cout << "| Weight Allow   :  " << weight_allow_1 << endl;
    cout << "| Seat Selection :  Not Included \n";
    cout << "| Meal           :  Included  \n";
    cout << "-------------------------------\n\n\n";

    cout << "2)-----------------------------\n";
    cout << "| Flight Type    :  " << flightype << "\n";
    cout << "| Seat Category  :  ECONOMY\n";
    cout << "| Ticket Price   :  " << ticket_price + 30000 << "\n";
    cout << "| STOPS          :  " << stops << endl;
    cout << "| Weight Allow   :  " << weight_allow_2 << endl;
    cout << "| Seat Selection :  Included \n";
    cout << "| Meal           :  Included  \n";
    cout << "-------------------------------\n\n\n";

    cout << "SELECT THE FARE NUMBER : ";
    cin >> fareNumberChoose;

    if (fareNumberChoose == 1)
    {
        if (flightype == "Multi city" || flightype == "multi city" || flightype == "multicity")
        {
            flightSummery_for_multiCiy(ticket_price);
        }
        
        flightSummery(ticket_price);
    }
    else if (fareNumberChoose == 2)
    {
        seatNumber = seatSelection();
        if (flightype == "Multi city" || flightype == "multi city" || flightype == "multicity")
        {
            flightSummery_for_seatSelector_multiCity(seatNumber,ticket_price);
        }
        else
        {
            flightSummery_for_seatSelector(seatNumber,ticket_price);
        }
    }
}