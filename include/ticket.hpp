#ifndef TICKET
#define TICKET

#include <string>

using namespace std;

class ticket
{

    public:
        ticket(string, string);
        void set_serial_parvaz(long long int);
        void set_tharikh_parvaz(string);
        void set_saat_parvaz(string);
        void set_mabda(string);
        void set_maghsad(string);
        void set_name(string);
        void set_last_name(string);
        void set_code_meli(long long int);
        void set_serial_air(long long int);
        void set_khalaban_code(int);
        void set_mashin_code(int);
        void set_price(int);
    


    private:
        long long int serial_parvaz;
        string tharikh_parvaz;
        string saat_parvaz;
        string mabda;
        string maghsad;
        string name;
        string last_name;
        long long int code_meli;
        long long int serial_air;
        int khalaban_code;
        int mashin_code;
        string price;

};






#endif