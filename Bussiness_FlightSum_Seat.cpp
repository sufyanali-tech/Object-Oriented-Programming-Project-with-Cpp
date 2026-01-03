#include "Economy_Bussiness_First_Person.h"
#include <iostream>
using namespace std;

void Bussiness :: flightSummery(int flight_price)
{
    system("cls");

    cout << "----------------- FLIGHT SUMMARY --------------------\n";
    cout << "|\n";
    cout << "| Personal Details \n";
    cout << "| \n";
    cout << "| First Name  : " << first_name << endl;
    cout << "| Last Name  : " << last_name << endl;
    cout << "| Passport Number  : " << e_passport_number << "\n";
    cout << "|\n";
    cout << "| Flight Details \n";
    cout << "| \n";
    cout << "| Flight Type  : " << flightype << endl;
    cout << "| Departure    : " << departure_city_name_1 << endl;
    cout << "| Distination  : " << destination_city_name_1 << endl;
    cout << "| Flight Date  : " << date_of_travel_1 << endl;
    cout << "| Seat Category:  Bussiness" << endl;
    cout << "| Weight Allow : " << weight_allow_1 << endl;
    cout << "| Ticket Price : " << flight_price << " PKR \n";
    cout << "| Seat Booked  : Adult 12+ (" << adult_seat << ")" << " Child : (" << child_seat << ")" << " Infant (" << infant_seat << ")\n";
    cout << "|-----------------------------------------------------\n";

    cout << "Do you Want to Comfirm your Ticket : yes/no\n\n\n";
    cin >> confirm_ticket;
    if (confirm_ticket == "yes" || confirm_ticket == "Yes")
    {
        printTicket(flight_price);
    }
}
void Bussiness :: flightSummery_for_multiCity(int flight_price)
{
    system("cls");

    cout << "----------------- FLIGHT SUMMARY --------------------\n";
    cout << "|\n";
    cout << "| Personal Details \n";
    cout << "| \n";
    cout << "| First Name  : " << first_name << endl;
    cout << "| Last Name  : " << last_name << endl;
    cout << "| Passport Number  : " << e_passport_number << "\n";
    cout << "|\n";
    cout << "| Flight Details \n";
    cout << "| \n";
    cout << "| Flight Type  : " << flightype << endl;
    cout << "| (1ST FLIGHT ) : \n"; 
    cout << "| Departure    : " << departure_city_name_1 << endl;
    cout << "| Distination  : " << destination_city_name_1 << endl;
    cout << "| 1st Flight Date  : " << date_of_travel_1 << endl;
    cout << "|(2ND FLIGHT )  : \n";
    cout << "| Departure    : " << departure_city_name_2 << endl;
    cout << "| Distination  : " << destination_city_name_2 << endl;
    cout << "| Seat Category:  Bussiness" << endl;
    cout << "| Weight Allow : " << weight_allow_1 << endl;
    cout << "| Ticket Price : " << flight_price << " PKR \n";
    cout << "| Seat Booked  : Adult 12+ (" << adult_seat << ")" << " Child : (" << child_seat << ")" << " Infant (" << infant_seat << ")\n";
    cout << "|-----------------------------------------------------\n";

    cout << "Do you Want to Comfirm your Ticket : yes/no\n\n\n";
    cin >> confirm_ticket;
    if (confirm_ticket == "yes" || confirm_ticket == "Yes")
    {
        printTicket_for_multiCity(flight_price);
    }
}
void Bussiness :: flightSummery_for_seatSelector(string seatNumber, int ticket_price)
{
    system("cls");
    
    cout << "----------------- FLIGHT SUMMARY --------------------\n";
    cout << "|\n";
    cout << "| Personal Details \n";
    cout << "| \n";
    cout << "| First Name  : " << first_name << endl;
    cout << "| Last Name  : " << last_name << endl;
    cout << "| Passport Number  : " << e_passport_number << "\n";
    cout << "|\n";
    cout << "| Flight Details \n";
    cout << "| \n";
    cout << "| Flight Type  : " << flightype << endl;
    cout << "| Departure    : " << departure_city_name_1 << endl;
    cout << "| Distination  : " << destination_city_name_1 << endl;
    cout << "| Seat Number  : " << seatNumber << endl;
    cout << "| Flight Date  : " << date_of_travel_1 << endl;
    cout << "| Seat Category:  Bussiness" << endl;
    cout << "| Weight Allow : " << weight_allow_2 << endl;
    cout << "| Ticket Price : " << ticket_price << " PKR \n";
    cout << "| Seat Booked  : Adult 12+ (" << adult_seat << ")" << " Child : (" << child_seat << ")" << " Infant (" << infant_seat << ")\n";
    cout << "|-----------------------------------------------------\n\n\n";

    cout << "Do you Want to Comfirm your Ticket : yes/no\n";
    cin >> confirm_ticket;
    if (confirm_ticket == "yes" || confirm_ticket == "Yes")
    {
        printTicket_for_seatSelector(seatNumber,ticket_price);
    }
}
void Bussiness :: flightSummery_for_seatSelector_multiCity(string seatNumber, int ticket_price)
{
     system("cls");
    
    cout << "----------------- FLIGHT SUMMARY --------------------\n";
    cout << "|\n";
    cout << "| Personal Details \n";
    cout << "| \n";
    cout << "| First Name  : " << first_name << endl;
    cout << "| Last Name  : " << last_name << endl;
    cout << "| Passport Number  : " << e_passport_number << "\n";
    cout << "|\n";
    cout << "| Flight Details \n";
    cout << "| \n";
    cout << "| Flight Type  : " << flightype << endl;
    cout << "| (1ST FLIGHT)\n";
    cout << "| Departure    : " << departure_city_name_1 << endl;
    cout << "| Distination  : " << destination_city_name_1 << endl;
    cout << "| 1st Flight Date  : " << date_of_travel_1 << "\n";
    cout << "| (2ND FLIGHT)\n";
    cout << "| Departure    : " << departure_city_name_2 << "\n";
    cout << "| Distination  : " << destination_city_name_2 << "\n";
    cout << "| 2nd Flight Date  : " << date_of_travel_2 << "\n";
    cout << "| Seat Number  : " << seatNumber << endl;
    cout << "| Seat Category:  Bussiness" << endl;
    cout << "| Weight Allow : " << weight_allow_2 << endl;
    cout << "| Ticket Price : " << ticket_price << " PKR \n";
    cout << "| Seat Booked  : Adult 12+ (" << adult_seat << ")" << " Child : (" << child_seat << ")" << " Infant (" << infant_seat << ")\n";
    cout << "|-----------------------------------------------------\n\n\n";

    cout << "Do you Want to Comfirm your Ticket : yes/no\n";
    cin >> confirm_ticket;
    if (confirm_ticket == "yes" || confirm_ticket == "Yes")
    {
        printTicket_for_seatSelector_multyCity(seatNumber,ticket_price);
    }
}
string Bussiness :: seatSelection()
{
    system("cls");
    cout << "---------------------------------\n";
    cout << "|       BUSSINESS CLASS SEATS      |\n";
    cout << "---------------------------------\n";
    cout << "   A   B   C       D   E   F\n";
    
    for (int row = 1; row <= 10; row++)
    {
        cout << row << " ";
        for (char col = 'A'; col <= 'F'; col++)
        {
            if (col == 'D') cout << "    "; // Gap between seats
            cout << "[" << ((row == 2 && col == 'B') ? 'X' : ' ') << "] ";
        }
        cout << endl;
    }
    
    cout << "\n[X] = Booked   [ ] = Available\n";
    cout << "Enter seat number (e.g., 3C): ";
    
    string seat;
    cin >> seat;
    return seat;
}