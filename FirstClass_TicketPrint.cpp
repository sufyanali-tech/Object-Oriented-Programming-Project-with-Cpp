#include "Economy_Bussiness_First_Person.h"
#include <fstream>
#include <iostream>

void Firstclass :: printTicket(int flight_price)
{
    ofstream outFile;

    outFile.open("output.txt");
    outFile << "------------------------------------------------------\n";
    outFile << "|                    FLIGHT TICKET                    |\n";
    outFile << "------------------------------------------------------\n\n\n";

    outFile << "------------------------------------------------------\n";
    outFile << "| Personal Details \n";
    outFile << "| \n";
    outFile << "| First Name  : " << first_name << endl;
    outFile << "| Last Name  : " << last_name << endl;
    outFile << "| Passport Number  : " << e_passport_number << "\n";
    outFile << "|\n";
    outFile << "| Flight Details \n";
    outFile << "|\n";
    outFile << "| Flight Type  : " << flightype << "\n";
    outFile << "| Departure    : " << departure_city_name_1 << "\n";
    outFile << "| Distination  : " << destination_city_name_1 << "\n";
    outFile << "| Flight Date  : " << date_of_travel_1 << "\n";
    outFile << "| Seat Category:  Economy"  << "\n";
    outFile << "| Weight Allow : " << weight_allow_1 << "\n";
    outFile << "| Meal         : Included\n";  
    outFile << "| Ticket Price : " << flight_price << " PKR \n";
    outFile << "| Seat Booked  : Adult 12+ (" << adult_seat << ")" << " Child : (" << child_seat << ")" << " Infant (" << infant_seat  << ")\n";
    outFile << "|-----------------------------------------------------\n";

    outFile.close();

    system("cls");

    cout << "----------------------------------------------\n";
    cout << "| TICKET SUCCESSFULLY BOOKED AND ALSO PRINTED |\n";
    cout << "----------------------------------------------\n";

    system("pause");
}
void Firstclass :: printTicket_for_multiCity(int flight_price)
{
    
    ofstream outFile;

    outFile.open("output.txt");
    outFile << "------------------------------------------------------\n";
    outFile << "|                    FLIGHT TICKET                    |\n";
    outFile << "------------------------------------------------------\n\n\n";

    outFile << "------------------------------------------------------\n";
    outFile << "| Personal Details \n";
    outFile << "| \n";
    outFile << "| First Name  : " << first_name << endl;
    outFile << "| Last Name  : " << last_name << endl;
    outFile << "| Passport Number  : " << e_passport_number << "\n";
    outFile << "|\n";
    outFile << "| Flight Details \n";
    outFile << "|\n";
    outFile << "| Flight Type  : " << flightype << "\n";
    outFile << "| (1ST FLIGHT)\n";
    outFile << "| Departure    : " << departure_city_name_1 << "\n";
    outFile << "| Distination  : " << destination_city_name_1 << "\n";
    outFile << "| 1st Flight Date  : " << date_of_travel_1 << "\n";
    outFile << "| (2ND FLIGHT)\n";
    outFile << "| Departure    : " << departure_city_name_2 << "\n";
    outFile << "| Distination  : " << destination_city_name_2 << "\n";
    outFile << "| 2nd Flight Date  : " << date_of_travel_2 << "\n";
    outFile << "| Seat Category:  Economy"  << "\n";
    outFile << "| Weight Allow : " << weight_allow_1 << "\n";
    outFile << "| Meal         : Included\n";  
    outFile << "| Ticket Price : " << flight_price << " PKR \n";
    outFile << "| Seat Booked  : Adult 12+ (" << adult_seat << ")" << " Child : (" << child_seat << ")" << " Infant (" << infant_seat  << ")\n";
    outFile << "|-----------------------------------------------------\n";

    outFile.close();

    system("cls");

    cout << "----------------------------------------------\n";
    cout << "| TICKET SUCCESSFULLY BOOKED AND ALSO PRINTED |\n";
    cout << "----------------------------------------------\n";

    system("pause");
}
void Firstclass :: printTicket_for_seatSelector(string seatNumber, int ticket_price)
{
    ofstream outFile;

    outFile.open("output.txt");
    outFile << "------------------------------------------------------\n";
    outFile << "|                    FLIGHT TICKET                    |\n";
    outFile << "------------------------------------------------------\n\n\n";

    outFile << "------------------------------------------------------\n";
    outFile << "| Personal Details \t\t\t\n";
    outFile << "| \n";
    outFile << "| First Name  : " << first_name << endl;
    outFile << "| Last Name  : " << last_name << endl;
    outFile << "| Passport Number  : " << e_passport_number << "\n";
    outFile << "|\n";
    outFile << "| Flight Details \n";
    outFile << "| \n";
    outFile << "| Flight Type  : " << flightype << "\n";
    outFile << "| Departure    : " << departure_city_name_1 << "\n";
    outFile << "| Distination  : " << destination_city_name_1 << "\n";
    outFile << "| Flight Date  : " << date_of_travel_1 << "\n";
    outFile << "| Seat Number  : " << seatNumber << "\n";
    outFile << "| Seat Category:  Economy"  << "\n";
    outFile << "| Weight Allow : " << weight_allow_2 << "\n";
    outFile << "| Meal         : Included \n";  
    outFile << "| Ticket Price : " << ticket_price << " PKR \n";
    outFile << "| Seat Booked  : Adult 12+ (" << adult_seat << ")" << " Child : (" << child_seat << ")" << " Infant (" << infant_seat  << ")\n";
    outFile << "|-----------------------------------------------------\n";

    outFile.close();

    system("cls");

    cout << "----------------------------------------------\n";
    cout << "| TICKET SUCCESSFULLY BOOKED AND ALSO PRINTED |\n";
    cout << "----------------------------------------------\n";

    system("pause");
}
void Firstclass :: printTicket_for_seatSelector_multyCity(string seatNumber, int ticketprice)
{
     
    ofstream outFile;

    outFile.open("output.txt");
    outFile << "------------------------------------------------------\n";
    outFile << "|                    FLIGHT TICKET                    |\n";
    outFile << "------------------------------------------------------\n\n\n";

    outFile << "------------------------------------------------------\n";
    outFile << "| Personal Details \n";
    outFile << "| \n";
    outFile << "| First Name  : " << first_name << endl;
    outFile << "| Last Name  : " << last_name << endl;
    outFile << "| Passport Number  : " << e_passport_number << "\n";
    outFile << "|\n";
    outFile << "| Flight Details \n";
    outFile << "| \n";
    outFile << "| Flight Type  : " << flightype << "\n";
    outFile << "| (1ST FLIGHT)\n";
    outFile << "| Departure    : " << departure_city_name_1 << "\n";
    outFile << "| Distination  : " << destination_city_name_1 << "\n";
    outFile << "| 1st Flight Date  : " << date_of_travel_1 << "\n";
    outFile << "| (2ND FLIGHT)\n";
    outFile << "| Departure    : " << departure_city_name_2 << "\n";
    outFile << "| Distination  : " << destination_city_name_2 << "\n";
    outFile << "| 2nd Flight Date  : " << date_of_travel_2 << "\n";
    outFile << "| Seat Number  : " << seatNumber << "\n";
    outFile << "| Seat Category:  Economy"  << "\n";
    outFile << "| Weight Allow : " << weight_allow_1 << "\n";
    outFile << "| Meal         : Included\n";  
    outFile << "| Ticket Price : " << ticketprice << " PKR \n";
    outFile << "| Seat Booked  : Adult 12+ (" << adult_seat << ")" << " Child : (" << child_seat << ")" << " Infant (" << infant_seat  << ")\n";
    outFile << "|-----------------------------------------------------\n";

    outFile.close();

    system("cls");

    cout << "----------------------------------------------\n";
    cout << "| TICKET SUCCESSFULLY BOOKED AND ALSO PRINTED |\n";
    cout << "----------------------------------------------\n";

    system("pause");
}