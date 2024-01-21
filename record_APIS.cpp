#include <string>
#include "print_get_funcs.h"
#include<iostream>
#include <array>


extern int int_IDs_counter;
extern std:: array <c_person,100> a_records ;


/**************** Add record function  *********************************/
/* 
* fuction name   : Add_record 
*  parmeters      : std:: string s_record_name 
*                    int int_record_age
* return type     : void 
*/
/***********************************************************************/
void Add_record (std:: string s_record_name , int int_record_age)
{
    /* increment the IDs counter */
    int_IDs_counter++;
   
    /* insert the name and age in the record data base*/
    a_records[int_IDs_counter].s_person_name = s_record_name;
    a_records[int_IDs_counter].int_person_age= int_record_age;

    /* print the recourd ID*/
    print( " user record added successfully ");
    print ( " \n your ID is :  " , int_IDs_counter );
}

/**************** Fetch record function  *********************************/
/* 
*  fuction name   : Fetch_record 
*  parmeters      : int_record_ID
*  return type    : void 
*/
/***********************************************************************/
void Fetch_record (int int_record_ID)
{
    /* checking if the id is valied id */
    if ( int_record_ID == -1)
    {
        /* the user didnt enter any records yet */
        print (" you didn`t enter any records yet ");
    }
    else if ( int_record_ID > int_IDs_counter)
    {
        /* the user enter nonvalied ID */
        print (" you entered a nonvalied Id , please enter a valied one " );
    }
    else 
    {
        /* printig the record elements*/
        print("***********************************************************");
        print(" \n user Name : " , a_records[int_record_ID].s_person_name );
        print( "user age : " , a_records[int_record_ID].int_person_age );
        print("\n");
        print("***********************************************************");
    }
}
