#ifndef FLIGHT
#define FLIGHT

    #include<vector>
    #include<string>
    #include"pilot.hpp"

    class flight
    {
        public:
            flight(pilot * , std::string , std::string , std::string , std::string , std::string , std::string);
            void print();
        private:
            std::string origin;
            std::string destination;
            std::string flight_day;
            std::string flight_time;
            pilot * flight_pilot;
            std::vector<air_hostes> air_hostes_list;
            std::string flight_code;
            std::string airplane_code;
            int num_of_passengers;
            int money;
    };

#endif