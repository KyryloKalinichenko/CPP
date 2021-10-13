#include "Convertor.hpp"

Convertor::Convertor( std::string s ): _s(s){
    return;
}

Convertor::Convertor(Convertor const & src){
    // set all var
    _s = src._s;
    return ;
}

Convertor::~Convertor( void ){
    // delete
    return;
}

Convertor & Convertor::operator=( Convertor const & rhs ){
    // ser var
    _s = rhs._s;
    return *this;
}

const char * Convertor::FailExc::what () const throw (){
    return "imossible";
}


void Convertor::use( void ){
    std::cout << "char :";
    if (_s.length() == 1 && std::isalpha(_s[0]))
        std::cout << "'" << static_cast<char>(_s[0]) << "'" << std::endl;
    else{
        try
        {
            int i = static_cast<int>(*this);
            if (std::isprint(i))
                std::cout << "'" <<  static_cast<char>(i) << "'" << std::endl;
            else
                std::cout << "Not printable" << std::endl;
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << '\n';
        }
    }

    std::cout << "int :";
    try
    {
        int i = static_cast<int>(*this);
        std::cout << "'" <<  i << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "float :";
    try
    {
        float f = static_cast<float>(*this);
        std::cout << "'" << f << "'" << std::endl;

    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }

    std::cout << "double :";
    try
    {
        double d;
        d = static_cast<double>(*this);
        std::cout << "'" << d << "'" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << '\n';
    }
}

Convertor::operator int() const{
    int i;
    try
    {
        i = std::stoi(_s);
    }
    catch(const std::exception& e)
    {
        throw FailExc();
    }
    return i;

}

Convertor::operator float() const{
    float i;
    try
    {
        i = std::stof(_s);
    }
    catch(const std::exception& e)
    {
        throw FailExc();
    }
    return i;

}

Convertor::operator double() const{
    double i;
    try
    {
        i = std::stod(_s);
    }
    catch(const std::exception& e)
    {
        throw FailExc();
    }
    return i;

}


