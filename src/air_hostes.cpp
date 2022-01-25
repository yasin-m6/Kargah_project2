#include <iostream>
#include<iomanip>
#include "flight.hpp"

using namespace std;


air_hostes::air_hostes(string p_code , string recruitment_d , string f_name , string l_name , string n_code , string birth_d) : peaple(f_name , l_name , n_code , birth_d)
{
    while (1)
    {
        try
        {
            set_personal_code(p_code);
            break;
        }
        catch( invalid_argument & e)
        {
            cerr << e.what() << endl;
            p_code = get_perssonel_code();
        }
        
    }

    while (1)
    {
        try
        {
            set_recruitment_day(recruitment_d);
            break;
        }
        catch( invalid_argument & e)
        {
            cerr << e.what() << endl;
            recruitment_d = get_recruitment_day();
        }
        
    }
    
}


air_hostes::~air_hostes()
{

}

string air_hostes::get_perssonel_code() const
{
    string p_code;

    cout << "Enter your perssonel code : ";
    cin >> p_code;

    return p_code;
}

void air_hostes::set_personal_code(string perssonel_code)
{
    if (perssonel_code.size() != 4)
    {
        throw invalid_argument("perssonel code has to be 4 digits!!!!");
    }
    
    for (size_t i = 0; i < perssonel_code.size(); i++)
    {
        if (isdigit(perssonel_code[i]) != isdigit('1'))
        {
            throw invalid_argument("perssonel code has to be made by digits!!!!");
        }
    }

    this->perssonel_code = perssonel_code;
    
}

string air_hostes::get_recruitment_day() const
{
    string recruitment_d;

    cout << "recruitment day is contain by 2 digits for day and month and 4 digits for year" << endl;
    cout << "put a space between each of them" << endl;
    cout << "Enter yor recruitment day : ";
   // cin >> recruitment_d.day >> recruitment_d.month >> recruitment_d.year;

    

    return recruitment_d;
}

void air_hostes::set_recruitment_day(string recruitment_day)
{

    this->recruitment_day = recruitment_day;
}

void air_hostes::add_flight(flight * new_flight)
{
    work_list.push_back(new_flight);
}

void air_hostes::print_info()
{
    cout << setw(10) << "first name" << "\t" << setw(10) << "last name" << "\t" << setw(10) << "perssonel code" << "\t" << setw(10) << "recruitment day" << endl;
    cout << setw(10) << first_name << "\t" << setw(10) << last_name << "\t" << setw(10) << perssonel_code << "\t" << setw(10) << recruitment_day << endl;
}

void air_hostes::print_work_list()
{
    cout << "pilot worklist" << endl;
    cout << setw(13) << "airplane code" << "\t" << setw(11) << "flight code" << "\t" << setw(10) << "flight day" << "\t" << setw(10) << "origin"  << setw(11) << "destination" << endl;
    for (size_t i = 0; i < work_list.size(); i++)
    {
        work_list[i]->print();
    }
    
}