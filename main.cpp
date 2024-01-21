
/* dependencies for out project */
#include<iostream>
#include<array>
#include<string>

#include"record_class.h"
#include"user_option_enum.h"
#include"print_get_funcs.h"
#include "record_APIS.h"



/* declare our database size (array of classes)*/
std:: array <c_person,100> a_records ;

/* declare a counter to trace the recorded ID*/
constexpr int int_defult_ID_value = -1 ;
int int_IDs_counter = int_defult_ID_value;


constexpr int int_record_age_defult_value = -1 ;
constexpr int int_record_ID_defult_value = -1 ;




int main ()
{
    /* prog var declartion */
    bool b_prog_is_running = true ;

    e_user_options e_user_option_o = e_user_options::defult_user_option;
    std:: string s_record_name ;
    int int_record_age = int_record_age_defult_value;
    int int_record_ID = int_record_ID_defult_value;

    /* start point of the application*/
    while ( b_prog_is_running == true )
    {

        /* printing the user signup Application options */
        print_Application_options();

        /* get the user input */
        e_user_option_o = get_input_enu ( );


        switch( e_user_option_o)
        {
            case e_user_options::user_Add_record_option :
            {
                /* printing massage */
                print( "Add user. please enter username and age " );

                /* get the name from the user */
                
                print("Name :  ") ;
                s_record_name = get_input_sting(  );

                /* get the name from the user */
                
                print("age :  ") ;
                int_record_age = get_input_int( );

                /* calling the Add record function*/
                Add_record(s_record_name,int_record_age);


            break; 
            }

            case e_user_options::user_fetch_record_option :
            {   
                /* get the record Id from the user*/
                print(" please enter the user ID " );
                print(" user ID : ") ;
                int_record_ID = get_input_int (  );

                /* calling the  Fetch function */
                Fetch_record (int_record_ID);
            }    

            break; 

            case e_user_options::user_exit_option :
                b_prog_is_running = false ;
                print(" you exit the Application ");
            break ;
            
            default :
                 print(" you enterd a nonvalied option, please enter a vaild option");
            break;

        }

        

    }


    return 0;
}