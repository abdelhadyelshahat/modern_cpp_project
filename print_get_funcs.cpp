#include "print_get_funcs.h"
#include"user_option_enum.h"



void print (std:: string massage )

{
    std:: cout << massage << '\n';
}

void print (std:: string massage , int int_local_input)
{
    std:: cout << massage << int_local_input << "\n \n ";
}

void print (std:: string massage1 , std:: string massage2)
{
    std::cout << massage1 << massage2 << '\n';
}





void print_Application_options (void)
{
    print(" \n ****************************************** \n");
    print(" user signup Application options  \n" );
    print("****************************************** \n");
    print("--------------------------------- \n");
    print(" please select an option :");
    print(" 1: Add Record " );
    print(" 2: Fetch Record ");
    print(" 3: Quit  \n");
    print(" --------------------------------- \n ");
    print("Enter option :");
}


std::istream& operator>>( std::istream& input_stream , e_user_options & e_user_o )
{
    int option ;

    input_stream >> option ;

    e_user_o = static_cast<e_user_options> (option) ;

    return input_stream;
}


e_user_options get_input_enu (void)
{

    e_user_options e_local_input_o;
    std::cin >> e_local_input_o ;
    return e_local_input_o;
}

int get_input_int (void)
{
    int int_local_input ;
    std:: cin >> int_local_input ;
    return int_local_input;
}

std:: string  get_input_sting (void)
{
    std:: string s_local_input;
    std:: cin>>s_local_input ;
    return s_local_input;
}