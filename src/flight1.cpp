#include<iostream>
#include"flight.hpp"

using namespace std;

flight::flight(pilot * pilot_info , string origin , string dest , string f_day , string f_time , string f_code , string a_code)
{
    this->flight_pilot = pilot_info;
}

void flight::print()
{
    
}