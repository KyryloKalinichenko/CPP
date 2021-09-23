#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "Contact.Class.h"

class PhoneBook{
    public:


        PhoneBook( void );
        ~PhoneBook( void );
        void    print( void ) const;
        int    check_cmd( std::string s);
        void    _search_f( void );
        


    private:
        const std::string _add = "ADD";
        const std::string _search = "SEARCH";
        const std::string _exit = "EXIT";

        int     _i;
        int     _amount;

        Contact _all[8];

};

#endif