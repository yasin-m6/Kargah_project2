#ifndef PILOT
#define PILOT

#include "air_hostes.hpp"


class pilot : public air_hostes
{
    public:
        pilot(int , std::string , std::string , std::string , std::string , std::string , std::string);
        ~pilot();
        int get_degree() const;
        void set_degree(int);
        void print() const;
    private:
        int pilots_degree;
};

#endif
