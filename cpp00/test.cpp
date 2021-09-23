#include <iostream>

int main( void )
{
    std::string str;
    std::string str2 = "lol is here";
    std::string str3 = "kek";

    // for (std::string::iterator it = str2.begin(); it !=str2.end(); ++it)
    //     std::cout << *it;
    // str.append(str3);
    
    std::cout << str2.erase(4, 2) << std::endl;
    // std::cout << str2.length() << std::endl;
    // std::cout << str2.max_size() << std::endl;
    // std::cout << str2.size() << std::endl;

    return 0;
}