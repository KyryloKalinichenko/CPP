#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact{
    public:

        Contact( void );
        ~Contact( void );
        void set_contact( void );
        void print_contact( int i ) const;

    private:
        std::string _f_name;
        std::string _l_name;
        std::string _n_name;
        std::string _ph_num;
        std::string _sec;
};

#endif