#include <iostream>
#include"flight.hpp"
#include"aireplane.hpp"
#include"mashin_hamle_bar.hpp"
#include<ticket.hpp>


using namespace std;

void CreateTicket()
{

}

void AddAireplane()
{

}

void add_mashin()
{

}

void AddAirehostes()
{

}

void AddPassengers()
{

}

void AddPeople()
{

}

void AddPilot()
{
    
}

int main()
{
    
    cout << "************************************************************" << endl;
    cout << "for start the programm enter a number that not 0" << endl;
    cout << "exit from programm enter 0" << endl;
    cout << "**************************************************************" << endl;
    cout << " command list " << endl;
    cout << " create_ticket " << endl; 
    cout << " add_airplane " << endl;
    cout << " add_mashin " << endl;
    cout << " add_air_hostes " << endl;
    cout << " add_passengers " << endl;
    cout << " add_people " << endl;
    cout << " add_pilot" << endl;
    cout << " entr one of above command " << endl;
    int a;
    cin>>a;
    while ( a != 0)
    {
        string command;
        cin >> command;
        if (command == "create_ticket")
        {
            CreateTicket();
        }
        if (command == "add_airplane")
        {
            AddAireplane();
        }
        if (command == "add_mashin")
        {
            add_mashin();
        }
        if (command == "add_air_hostes")
        {
            AddAirehostes();
        }
        if (command == "add_passengers")
        {
            AddPassengers();
        }
        if (command == "add_people")
        {
            AddPeople();
        }
        if (command == "add_pilot")
        {
            AddPilot();
        }
        
        cout << "*************************************************************" << endl;
        cout << "for start the programm enter a number that not 0" << endl;    
        cout << "exit from programm enter 0" << endl;
        cout << "**************************************************************" << endl;
        cout << " command list " << endl;
        cout << " create_ticket " << endl; 
        cout << " add_airplane " << endl;
        cout << " add_mashin " << endl;
        cout << " add_air_hostes " << endl;
        cout << " add_passengers " << endl;
        cout << " add_people " << endl;
        cout << " add_pilot" << endl;
        cout << " entr one of above command " << endl;
        cin>>a;
        if (a == 0)
        {
            break;
        }  
    
    }

    

       
    return 0;
}

void add_new_pilot(vector<pilot> & pilots_list)
{
    string f_name;
    string l_name;
    string n_code;//code meli
    string p_code;//code personeli
    int degree;//daraje
    string b_day;//tarikh tavalod
    string r_day;//tarikh estekhdam
    pilots_list.push_back(pilot(degree , p_code , r_day , f_name , l_name , n_code , b_day));
}

void add_new_air_hostes(vector<air_hostes> & air_hostes_list)
{
    string f_name;
    string l_name;
    string n_code;//code meli
    string p_code;//code personeli
    string b_day;//tarikh tavalod
    string r_day;//tarikh estekhdam
    air_hostes_list.push_back(air_hostes(p_code , r_day , f_name , l_name , n_code , b_day));
}

void add_new_passenger(vector<passengers> & passengers_list)
{
    string f_name;
    string l_name;
    string n_code;//code meli
    string b_day;//tarikh tavalod
    string fathers_name;
    passengers_list.push_back(passengers(fathers_name , f_name , l_name , n_code , b_day));
}

void add_new_flight(vector<flight> & flights_list)
{

}

void add_new_airplane(vector<aireplane> & airplanes_list)
{

}

void add_new_mashin(vector<mashin_hamle_bar> & mashins_list)
{

}

void add_new_ticket(vector<ticket> & tickets_list)
{

}