#ifndef MASHIN_HAMLE_BAR
#define MASHIN_HAMLE_BAR

#include <string>

using namespace std;

class mashin_hamle_bar
{
    public:
        void set_serial(long long int);
        void set_tharikh_sakht(string);

    private:
        long long int serial;
        string tharikh_sakht;
};



#endif