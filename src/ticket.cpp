#include <iostream>
#include "./ticket.hpp"

using namespace std;

ticket::ticket(string n, string l)
{
    name = n;
    last_name = l;
}

void ticket::set_serial_parvaz(long long int s)
{
    serial_parvaz = s;
}

void ticket::set_tharikh_parvaz(string t)
{
    tharikh_parvaz = t;
}

void ticket::set_saat_parvaz(string sp)
{
    saat_parvaz = sp;
}

void ticket::set_mabda(string mb)
{
    mabda = mb;
}

void ticket::set_maghsad(string mgh)
{
    maghsad = mgh; 
}

void ticket::set_name(string n)
{
    name = n;
}

void ticket::set_last_name(string l)
{
    last_name = l;
}

void ticket::set_code_meli(long long int c)
{
    code_meli = c;
}

void ticket::set_serial_air(long long int ser)
{
    serial_air = ser;
}

void ticket::set_khalaban_code(int khc)
{
    khalaban_code = khc;
}

void ticket::set_mashin_code(int mc)
{
    mashin_code = mc;
}

void ticket::set_price(int p)
{
    price = p;
}
