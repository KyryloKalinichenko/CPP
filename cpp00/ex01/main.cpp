#include <iostream>
#include "PhoneBook.Class.h"
#include "Contact.Class.h"

Contact::Contact( void ){
    return ;
}

Contact::~Contact( void ){
    return ;
}

void Contact::set_contact( void ) {

    std::cout << "First Name" << std::endl;
    std::cin >> _f_name;
    std::cout << "Last Name" << std::endl;
    std::cin >> _l_name;
    std::cout << "Nickname" << std::endl;
    std::cin >> _n_name;
    std::cout << "Phone number" << std::endl;
    while (1){
        std::cin >> _ph_num;
        if (_ph_num.find_first_not_of("0123456789+") == std::string::npos)
            break ;
    }
    std::cout << "darkest secret" << std::endl;
    std::cin >> _sec;
}

void Contact::print_contact( int i ) const {
    std::string str;

    (void)i;
    std::cout << str.assign(8, ' ') << i << "|";
    //std::cout << "here" << std::endl;
    if (_f_name.length() < 10)
        std::cout << str.assign(9 - _f_name.length(), ' ') << str.assign(_f_name) << "|";
    else
    {
        str.assign(_f_name.data(), 8);
        str.push_back('.');
        std::cout << str << "|";
    }
    if (_l_name.length() < 10)
        std::cout << str.assign(9 - _l_name.length(), ' ') << str.assign(_l_name) << "|";
    else
    {
        str.assign(_l_name.data(), 8);
        str.push_back('.');
        std::cout << str << "|";
    }
    if (_n_name.length() < 10)
        std::cout << str.assign(9 - _n_name.length(), ' ') << str.assign(_n_name) << "|" << std::endl;
    else
    {
        str.assign(_n_name.data(), 8);
        str.push_back('.');
        std::cout << str << "|" << std::endl;
    }

    // std::cout << str.assign(_l_name, 10) << "|";
    // std::cout << str.assign(_n_name, 10) << "|" << std::endl;
}

/////////////////////////////////////////////////////////////
PhoneBook::PhoneBook( void )
{
    this->_i = 0;
    this->_amount = 0;
    return ;
}

void PhoneBook::print( void ) const
{

    _all[0].print_contact(0);
    return ;
}

void PhoneBook::_search_f( void )
{
    int i = -1;
    std::string str;

    std::cout << str.assign("    index") << "|";
    std::cout << str.assign("first nam") << "|";
    std::cout << str.assign("last name") << "|";
    std::cout << str.assign(" nickname") << "|" << std::endl;
    while(++i < this->_amount)
    {
        _all[i].print_contact(i);
    }
    return ;
}

int PhoneBook::check_cmd( std::string s ){
    if (!s.compare(this->_add))
    {
        _all[_i].set_contact();
        _i++;
        if (_amount < 8)
            _amount++;
        if (_i >= 8)
            _i %= 8; 
        return 0;
    }
    if (!s.compare(this->_search))
    {
        _search_f();
        return 0;
    }
    if (!s.compare(this->_exit))
        return -1;
    return 1;
}

PhoneBook::~PhoneBook( void ){
    return ;
}

int main(void)
{
    PhoneBook       book;
    std::string     line;
    int             ret;

    while (true)
    {
        std::cin >> line;
        if (line.empty())
            continue ;
        ret = book.check_cmd(line);
        if (ret == -1)
            break ;
        //book.print();
    }
    // book.print();

    return 0;
}