#ifndef PRINT_GET_FUNCS_
#define PRINT_GET_FUNCS_

#include<iostream>
#include<string>
#include "user_option_enum.h"
#include "record_class.h"


void print (std:: string massage );
void print (std:: string massage , int int_local_input);
void print (std:: string massage1 , std:: string massage2);


void print_Application_options (void);


std::istream& operator>>( std::istream& input_stream , e_user_options & e_user_o );
e_user_options get_input_enu (void);

int get_input_int (void);

std::string  get_input_sting (void);
#endif

