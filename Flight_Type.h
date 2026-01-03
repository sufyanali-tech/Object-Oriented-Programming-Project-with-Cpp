#pragma once
#include <string>
using namespace std;
class Flight
{
    private:

    string choose_flight_type;

    string departure_city_name_1,departure_city_name_2;

    string destination_city_name_1,destination_city_name_2;

    public:

    bool flightType();
    
    bool selectFlightType(string);
};