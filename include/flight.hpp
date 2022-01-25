#ifndef FLIGHT2
#define FLIGHT2

#include<string>
#include<vector>
#include "passengers.hpp"
#include "pilot.hpp"


class flight
{
    public:
        flight(pilot * , std::string);
        ~flight();
        void set_passengers_num();
        std::string get_flight_code() const;
        void set_flight_code(std::string);
        std::string get_airplane_code() const;
        void set_airplane_code(std::string);
        std::string get_origin() const;
        void set_origin(std::string);
        std::string get_destination() const;
        void set_destination(std::string);
        std::string get_flight_day() const;
        void set_flight_day(std::string);
        std::string get_flight_time() const;
        void set_flight_time(std::string);
        void set_money();
        void change_pilot(pilot *);
        void add_to_air_hostes_list(air_hostes *);
        void add_to_passengers_list(passengers *);
        void print();
    private:
        int num_of_passengers;
        std::string flight_code;
        std::string airplane_code;
        std::string origin;
        std::string destination;
        std::string flight_day;
        std::string flight_time;
        pilot * pilot_info;
        std::vector<air_hostes> air_hostes_list;
        std::vector<passengers> passengers_list;
        int money;
};

#endif